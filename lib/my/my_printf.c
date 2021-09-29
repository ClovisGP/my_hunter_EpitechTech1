/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** a my_printf
*/
#include "proto_my_printf.h"

int check_flag(int comp, char *expr)
{
    int comp_bis = 0;
    char *flag = "csdibSuoxXpt%m";

    comp++;
    while (expr[comp] != flag[comp_bis])
        comp_bis++;
    if (comp_bis >= 12)
        comp_bis = 12;
    return (comp_bis);
}

int call_fonc(int comp_f, va_list bis)
{
    int (*fonction[14])(va_list);
    int ret;

    fonction[0] = &flag_c;
    fonction[1] = &flag_s;
    fonction[2] = &flag_d_i;
    fonction[3] = &flag_d_i;
    fonction[4] = &flag_b;
    fonction[5] = &flag_smaj;
    fonction[6] = &flag_u;
    fonction[7] = &flag_o;
    fonction[8] = &flag_x;
    fonction[9] = &flag_xmaj;
    fonction[10] = &flag_p;
    fonction[11] = &flag_t;
    fonction[12] = &flag_modu;
    fonction[13] = &no_flag;
    ret = fonction[comp_f](bis);
    return (ret);
}

int check_modu(char *expr, int comp, va_list ap)
{
    int comp_f;
    int ret = 0;

    comp_f = check_flag(comp, expr);
    ret = call_fonc(comp_f, ap);
    comp = comp + 2;
    return (comp);
}

int my_printf(char *expr, ...)
{
    va_list ap;
    int comp;
    int sto;
    int size = my_strlen(expr);

    va_start (ap, expr);
    for (comp = 0; (expr[comp] != '\0') && (comp < size); comp++) {
        while (expr[comp] == '%' && (comp < size)) {
            sto = check_modu(expr, comp, ap);
            if (comp + 2 != sto) {
                my_putstr("Error");
                return (84);
            }
            comp = sto;
        }
        if (expr[comp] != '\0')
            my_putchar(expr[comp]);
    }
    va_end(ap);
    return (0);
}
