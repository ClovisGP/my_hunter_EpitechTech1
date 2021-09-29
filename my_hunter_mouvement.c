/*
** EPITECH PROJECT, 2019
** my_hunter_mouvement.c
** File description:
** my_hunter's fonctions for deplacement and animation
*/
#include "include/proto_my_hunter.h"

int time_run(s_time_p *clock_g)
{
    clock_g->time_v = sfClock_getElapsedTime(clock_g->clock_v);
    clock_g->second = sfTime_asMilliseconds(clock_g->time_v);
}

int set_position(ini_p *src, posit_p *po, s_time_p *clock_g)
{
    po->p_ms = sfMouse_getPositionRenderWindow(src->wi);
    po->p_tar.x = po->p_ms.x - 37;
    po->p_tar.y = po->p_ms.y - 37;
    sfSprite_setPosition(src->m_s->tar, po->p_tar);
    if (po->p_m_b.x > 2000) {
        po->p_m_b.x = -200;
        po->p_m_b.y = (rand() % (950 - 250)) + 200;
        src->life = src->life - 1;
    }
    sfSprite_setPosition(src->m_s->m_b, po->p_m_b);
    src->m_s->rect_achie.left = 0;
    if (src->score >= 10 && src->score < 15)
        src->m_s->rect_achie.left = 250;
    else if (src->score >= 15)
        src->m_s->rect_achie.left = 500;
    sfSprite_setTextureRect(src->h_s->achie, src->m_s->rect_achie);
}

int move_money_bag(ini_p *src, posit_p *po, s_time_p *clock_g)
{
    clock_g->time_m = sfClock_getElapsedTime(clock_g->clock_m);
    clock_g->second_m = sfTime_asMilliseconds(clock_g->time_m);
    if ((clock_g->second >= 7000) && (clock_g->second_m >= 25)) {
        po->p_m_b.x = po->p_m_b.x + (5 + (clock_g->second / 250));
        po->p_m_b.y = po->p_m_b.y - 5;
        if (po->p_m_b.x > 960)
            po->p_m_b.y = po->p_m_b.y + 10;
        sfClock_restart(clock_g->clock_m);
    }
    sfSprite_setPosition(src->m_s->m_b, po->p_m_b);
}

int animation_cb(ini_p *src, posit_p *po, s_time_p *clock_g)
{
    clock_g->time_a = sfClock_getElapsedTime(clock_g->clock_a);
    clock_g->second_a = sfTime_asMilliseconds(clock_g->time_a);
    if ((clock_g->second_a >= 150 && clock_g->second <= 2600) 
    || (clock_g->second_a >= 150 && clock_g->second >= 5300)) {
        src->m_s->rect.left = src->m_s->rect.left + 180;
        po->p_cow.x = po->p_cow.x - 75;
        sfClock_restart(clock_g->clock_a);
        if (src->m_s->rect.left > 350)
            src->m_s->rect.left = 0;
    }
    if (clock_g->second_a >= 150 && ((clock_g->second > 2600) 
    && (clock_g->second <= 5300))) {
        src->m_s->rect.left = 520;
        sfClock_restart(clock_g->clock_a);
        if (clock_g->second >= 5300) {
            src->m_s->rect.left = 0;
        }
    }
    sfSprite_setTextureRect(src->m_s->cow, src->m_s->rect);
    sfSprite_setPosition(src->m_s->cow, po->p_cow);
    return (0);
}