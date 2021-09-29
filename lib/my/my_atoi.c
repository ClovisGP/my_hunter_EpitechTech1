/*
** EPITECH PROJECT, 2019
** atoi
** File description:
** str to int
*/
int my_strlen(char *str);

int my_atoi(char *str)
{
    int number = 0;
    int multiple = 1;
    int compteur = my_strlen(str);
    int i = 0;
    int n = 0;

    while (++i <= compteur)
        multiple = multiple * 10;
    while (multiple > 1) {
        if (str[n] != '-') {
            number = (str[n] - 48) * multiple + number;
            multiple = multiple / 10;
        }
        n++;
    }
    if (str[0] == '-')
        number = (number * (-1)) / 10;
    else
        number /= 10;
    return (number);
}
