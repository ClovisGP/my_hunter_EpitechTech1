/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main of my_hunter
*/
#include "include/proto_my_hunter.h"

int main(int ac, char **av)
{
    ini_p src;
    posit_p po;
    s_time_p clock_g;

    if (ac > 1) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            display_help();
            return (0);
        }
    }
    src.h_s = malloc(sizeof(hud_p));
    src.m_s = malloc(sizeof(move_p));
    if (window_create(&src) == 84 || sprite_hud(&src, &po) == 84 || 
    sprite(&src, &po) == 84 || text_creation(&src, &po) == 84 
    || music(&src) == 84)
        return(84);
    window_display(&src, &po, &clock_g);
    destroy_media(&src, &clock_g);
    return (0);
}