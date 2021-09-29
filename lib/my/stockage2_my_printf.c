/*
** EPITECH PROJECT, 2019
** stockage1_my_printf
** File description:
** stockage for flag %S, %u, %o, %x, %X
*/
#include "proto_my_printf.h"

int flag_smaj(va_list fourth)
{
    int comp;
    char *str = va_arg(fourth, char *);
    int nb;
    int result;

    for (comp = 0; str[comp] != '\0'; comp++) {
        if (str[comp] < 32 || str[comp] >= 127) {
            nb = str[comp];
            result = my_decimal_to_octal(nb);
            my_putchar(92);
            my_put_nbr(result);
        } else
            my_putchar(str[comp]);
    }
    return (0);
}

int flag_u(va_list fourth)
{
    my_put_unsigned_int(va_arg(fourth, unsigned int));
    return (0);
}

int flag_o(va_list fourth)
{
    int nb = va_arg(fourth, int);
    int comp;
    int ret = 0;
    int nb_bis = nb;

    for (comp = 0; nb_bis != 0; comp++)
        nb_bis = nb_bis / 8;
    comp = comp + 2;

    char *sto = malloc(sizeof(comp));
    char *result = malloc(sizeof(comp));
    for (comp = 0; nb != 0; comp++) {
        ret = nb % 8;
        sto[comp] = ret + 48;
        nb = nb / 8;
    }
    sto[comp] = '\0';
    result = my_revstr(sto);
    my_putstr(result);
    return (0);
}

int flag_x(va_list fourth)
{
    unsigned int sto;
    unsigned int nb = va_arg(fourth, unsigned int);
    char *stockage = malloc(sizeof(char) * nb);
    if (stockage == NULL)
        return (84);
    char *list_hex_min = "0123456789abcdef";
    int comp = 0;

    if (nb == 0)
        my_putchar(48);
    while (nb != 0) {
        sto = (nb % 16);
        nb = (nb / 16);
        stockage[comp] = list_hex_min[sto];
        comp++;
    }
    stockage[comp] = '\0';
    my_putstr(my_revstr(stockage));
    return (0);
}

int flag_xmaj(va_list fourth)
{
    unsigned int sto;
    unsigned int nb = va_arg(fourth, unsigned int);
    char *stockage = malloc(sizeof(char) * nb);
    if (stockage == NULL)
        return (84);
    char *list_hex_min = "0123456789ABCDEF";
    int comp = 0;

    if (nb == 0)
        my_putchar(48);
    while (nb != 0) {
        sto = (nb % 16);
        nb = (nb / 16);
        stockage[comp] = list_hex_min[sto];
        comp++;
    }
    stockage[comp] = '\0';
    my_putstr(my_revstr(stockage));
    return (0);
}