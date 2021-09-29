/*
** EPITECH PROJECT, 2019
** my_put_board.c
** File description:
** display a char ** with a my_putstr
*/
void my_putstr(char const *str);

int my_put_board(char **board)
{
    int comp;

    for (comp = 0;board[comp]; comp++)
        my_putstr(board[comp]);
    return (0);
}
