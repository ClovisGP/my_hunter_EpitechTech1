/*
** EPITECH PROJECT, 2019
** my_in_to_str.c
** File description:
** change a int to a char *
*/
#include "stdlib.h"
char *my_revstr(char *str);

char *my_int_to_str(int nb)
{
    int comp;
    int comp_se;
    int i = 1;

    if (nb == 0)
        return ("0");
    for (comp = 0; i <= nb; comp++)
        i = i * 10;
    char *sto = malloc(sizeof(char) * (comp + 1));

    for (comp_se = 0; comp_se < comp; comp_se++) {
        sto[comp_se] = nb % 10 + 48;
        nb = nb / 10;
    }
    sto[comp_se] = '\0';
    return (my_revstr(sto));
}