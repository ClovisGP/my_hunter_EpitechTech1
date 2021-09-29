/*
** EPITECH PROJECT, 2019
** stockage3_my_printf
** File description:
** stockage for flag %s, %c, %d and %i, %b, %%
*/
#include "proto_my_printf.h"

int no_flag(va_list fourth)
{
    my_putstr("This flag don't exist.\n");
    return (84);
}

int flag_p(va_list fourth)
{
    unsigned int poi = va_arg(fourth, unsigned int);

    my_putstr("0x");
    my_put_nbr_in_hex(poi);
    return (0);
}

int flag_t(va_list fourth)
{
    my_put_board(va_arg(fourth, char **));
}