/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** display int
*/
void my_putchar(char c);

void my_put_unsigned_int(unsigned int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb = nb * -1;
    }
    if (nb > 10) {
        my_put_unsigned_int(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    if (nb < 10)
        my_putchar(nb + 48);
}
