/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** display on charactère in terminal
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}