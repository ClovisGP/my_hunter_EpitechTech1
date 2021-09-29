/*
** EPITECH PROJECT, 2019
** my_hunter.c
** File description:
** my_hunter for the norme
*/
#include "include/proto_my_hunter.h"

int window_create(ini_p *src)
{
    sfVideoMode mode = {1920, 1080, 32};

    src->wi = sfRenderWindow_create(mode, "My_hunter", sfFullscreen 
    | sfClose, NULL);
    if (!src->wi) {
        my_printf("Error");
        return (84);
    }
    src->game = 0;
    return (0);
}

int draw_sprite(ini_p *src, s_time_p *clock_g)
{
    sfRenderWindow_setMouseCursorVisible(src->wi, 0);
    sfRenderWindow_drawSprite(src->wi, src->h_s->bg, NULL);
    sfRenderWindow_drawSprite(src->wi, src->h_s->par, NULL);
    sfRenderWindow_drawSprite(src->wi, src->h_s->pan_f, NULL);
    sfRenderWindow_drawSprite(src->wi, src->h_s->pan_s, NULL);
    sfRenderWindow_drawSprite(src->wi, src->h_s->pan_th, NULL);
    sfRenderWindow_drawSprite(src->wi, src->h_s->achie, NULL);
    if (src->game == 1) {
        sfRenderWindow_drawSprite(src->wi, src->m_s->m_b, NULL);
        sfRenderWindow_drawSprite(src->wi, src->m_s->cow, NULL);
        if (src->score >= 1)
            sfRenderWindow_drawSprite(src->wi, src->m_s->mo, NULL);
        if ((clock_g->second > 2600) && (clock_g->second <= 4600)) {
            sfRenderWindow_drawSprite(src->wi, src->m_s->bub, NULL);
            sfRenderWindow_drawText(src->wi, src->h_s->te_cb, NULL);
        }
    }
    draw_sprite_2(src, clock_g);
}

int draw_sprite_2(ini_p *src, s_time_p *clock_g)
{
    sfRenderWindow_drawText(src->wi, src->h_s->te_pl, NULL);
    sfRenderWindow_drawText(src->wi, src->h_s->te_tl, NULL);
    sfRenderWindow_drawText(src->wi, src->h_s->te_li, NULL);
    sfRenderWindow_drawText(src->wi, src->h_s->te_sc, NULL);
    sfRenderWindow_drawText(src->wi, src->te_end, NULL);
    sfRenderWindow_drawSprite(src->wi, src->m_s->tar, NULL);
}

int window_display(ini_p *src, posit_p *po, s_time_p *clock_g)
{
    src->life = 3;
    src->score = 0;
    sfRenderWindow_setFramerateLimit(src->wi, 60);
    while (sfRenderWindow_isOpen(src->wi)) {
        while (sfRenderWindow_pollEvent(src->wi, &src->m_s->event))
            test_event(src, po, clock_g);
        if (src->game == 1) {
            time_run(clock_g);
            move_money_bag(src, po, clock_g);
            animation_cb(src, po, clock_g);
        }
        set_position(src, po, clock_g);
        draw_sprite(src, clock_g);
        if (src->life <= 0)
            src->game = 0;
        sfText_setString(src->h_s->te_li, my_int_to_str(src->life));
        sfText_setString(src->h_s->te_sc, my_int_to_str(src->score));
        sfRenderWindow_display(src->wi);
    }
}