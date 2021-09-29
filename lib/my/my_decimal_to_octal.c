/*
** EPITECH PROJECT, 2019
** decimal_to_octal
** File description:
** convert number to number octal in ascii
*/

int my_decimal_to_octal(int nb)
{
    int sto;
    int i = 1;
    int result;

    while (nb != 0) {
        sto = nb % 8;
        nb = nb / 8;
        result = result + (sto * i);
        i = i * 10;
    }
    return (result);
}