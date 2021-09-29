/*
** EPITECH PROJECT, 2019
** stockage1_my_printf
** File description:
** stockage for flag %s, %c, %d and %i, %b, %%
*/
#include "proto_my_printf.h"

int flag_c(va_list fourth)
{
    my_putchar(va_arg(fourth, int));
    return (0);
}

int flag_s(va_list fourth)
{
    my_putstr(va_arg(fourth, char *));
    return (0);
}

int flag_d_i(va_list fourth)
{
    my_put_nbr(va_arg(fourth, int));
    return (0);
}

int flag_b(va_list fourth)
{
    my_put_nbr_in_bi(va_arg(fourth, unsigned int));
    return (0);
}

int flag_modu(va_list fourth)
{
    my_putchar(37);
    return (0);
}
