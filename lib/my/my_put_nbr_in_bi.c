/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** display int
*/
#include <stdlib.h>
void my_putchar(char c);
char *my_revstr(char *str);
int my_putstr(char const *str);


void my_put_nbr_in_bi(unsigned int nb)
{
    int comp;
    int ret = 0;
    int nb_bis = nb;

    for (comp = 0; nb_bis != 0; comp++)
        nb_bis = nb_bis / 2;
    comp = comp + 2;
    char *sto = malloc(sizeof(comp));
    char *result = malloc(sizeof(comp));
    for (comp = 0; nb != 0; comp++) {
        ret = nb % 2;
        sto[comp] = ret + 48;
        nb = nb / 2;
    }
    sto[comp] = '\0';
    result = my_revstr(sto);
    my_putstr(result);
}