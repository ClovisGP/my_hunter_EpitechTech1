/*
** EPITECH PROJECT, 2019
** proto_my_printf
** File description:
** containt all prototypes for my_printf
*/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr(int nb);
void my_put_nbr_in_bi(unsigned int nb);
void my_put_unsigned_int(unsigned int nb);
int my_put_nbr_in_hex(unsigned int nb);
int my_decimal_to_octal(int nb);
int my_strlen(char const *str);
int my_put_board(char **board);
char *my_revstr(char *str);
int flag_s(va_list fourth);
int flag_c(va_list fourth);
int flag_d_i(va_list fourth);
int flag_b(va_list fourth);
int flag_modu(va_list fourth);
int flag_smaj(va_list fourth);
int flag_u(va_list fourth);
int flag_o(va_list fourth);
int flag_x(va_list fourth);
int flag_xmaj(va_list fourth);
int flag_p(va_list fourth);
int flag_t(va_list fourth);
int no_flag(va_list fourth);
