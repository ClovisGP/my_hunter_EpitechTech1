/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** my_revstr.c
*/

char *my_revstr(char *str)
{
    int comp = 0;
    int comp_reb = 0;
    int comp_divi;
    char sto_char;

    while (str[comp_reb] != '\0')
        comp_reb = comp_reb + 1;
    comp_divi = comp_reb / 2;
    comp_reb = comp_reb - 1;
    while (comp_reb >= comp_divi) {
        sto_char = str[comp];
        str[comp] = str[comp_reb];
        str[comp_reb] = sto_char;
        comp = comp + 1;
        comp_reb = comp_reb - 1;
    }
    return (str);
}
