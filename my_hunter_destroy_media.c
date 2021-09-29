/*
** EPITECH PROJECT, 2019
** my_hunter_destry_media.c
** File description:
** fonction for my_hunter for destroy media and others fonctions
*/
#include "include/proto_my_hunter.h"

void display_help(void)
{
    my_printf("USAGE\n     ./my_hunter\nDESCRIPTION\n     ");
    my_printf("It's a game. You must hit the bag of money with three \n");
    my_printf("     life. When a bag leave the screen, you lost a life.\n");
    my_printf("            Good luck, it's my first game.");
}

void clic_end(ini_p *src, posit_p *po)
{
    if (src->game == 1) {
        src->life = 0;
        src->game = 0;
    } else
        sfRenderWindow_close(src->wi);
}

void destroy_media(ini_p *src, s_time_p *clock_g)
{
    sfSprite_destroy(src->h_s->achie);
    sfTexture_destroy(src->h_s->t_achie);
    sfSprite_destroy(src->m_s->bub);
    sfTexture_destroy(src->m_s->t_bub);
    sfSprite_destroy(src->m_s->cow);
    sfTexture_destroy(src->m_s->t_cow);
    sfSprite_destroy(src->m_s->mo);
    sfTexture_destroy(src->m_s->t_mo);
    sfSprite_destroy(src->m_s->m_b);
    sfTexture_destroy(src->m_s->t_m_b);
    sfSprite_destroy(src->h_s->pan_f);
    sfTexture_destroy(src->h_s->t_pan_f);
    sfSprite_destroy(src->h_s->par);
    sfTexture_destroy(src->h_s->t_par);
    sfSprite_destroy(src->m_s->tar);
    sfTexture_destroy(src->m_s->t_tar);
    sfSprite_destroy(src->h_s->bg);
    sfTexture_destroy(src->h_s->t_bg);
    destroy_media_2(src, clock_g);
    sfRenderWindow_destroy(src->wi);
}

void destroy_media_2(ini_p *src, s_time_p *clock_g)
{
    sfMusic_destroy(src->m_s->sh_so);
    sfMusic_destroy(src->h_s->ost);
    sfTexture_destroy(src->h_s->t_pan_th);
    sfSprite_destroy(src->h_s->pan_th);
    sfTexture_destroy(src->h_s->t_pan_s);
    sfSprite_destroy(src->h_s->pan_s);
    sfText_destroy(src->h_s->te_pl);
    sfText_destroy(src->te_end);
    sfText_destroy(src->h_s->te_li);
    sfText_destroy(src->h_s->te_tl);
    sfFont_destroy(src->h_s->f_pl);
    sfFont_destroy(src->h_s->f_cb);
    sfText_destroy(src->h_s->te_cb);
}