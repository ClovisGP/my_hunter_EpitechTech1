/*
** EPITECH PROJECT, 2019
** my_put_nbr_in_hex.c
** File description:
** my_put_nbr which display nbr in hexa
*/
#include "proto_my_printf.h"

int my_put_nbr_in_hex(unsigned int nb)
{
    unsigned int sto;
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