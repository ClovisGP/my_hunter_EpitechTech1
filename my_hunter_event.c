/*
** EPITECH PROJECT, 2019
** my_hunter_event.c
** File description:
** fonction for event of my_hunter
*/
#include "include/proto_my_hunter.h"

void event_start(ini_p *src, posit_p *po, s_time_p *clock_g)
{
    if (((po->p_t_pl.x - 20) <= po->p_ms.x) && ((po->p_t_pl.x + 170) >= 
    po->p_ms.x) && ((po->p_t_pl.y - 50) <= po->p_ms.y) && 
    ((po->p_t_pl.y + 50) >= po->p_ms.y) && (src->game == 0)) {
        clock_g->clock_v = sfClock_create();
        clock_g->clock_m = sfClock_create();
        clock_g->clock_a = sfClock_create();
        po->p_m_b.x = -200;
        src->game = 1;
        src->life = 3;
        src->score = 0;
        src->m_s->rect.top = 0;
        src->m_s->rect.left = 0;
        src->m_s->rect.width = 175;
        src->m_s->rect.height = 350;
        po->p_cow.y = 750;
        po->p_cow.x = 2000;
    }
}

int shot(ini_p *src)
{
    sfMusic_destroy(src->m_s->sh_so);
    src->m_s->sh_so = sfMusic_createFromFile("resc/shot_sound.ogg");
    if (!src->m_s->sh_so)
        return (84);
    sfMusic_play(src->m_s->sh_so);
    return (0);
}

int hit(ini_p *src, posit_p *po)
{
    po->p_mo.x = po->p_m_b.x;
    po->p_mo.y = po->p_m_b.y;
    sfSprite_setPosition(src->m_s->mo, po->p_mo);
    src->score = src->score + 1;
    po->p_m_b.x = -200;
    po->p_m_b.y = (rand() % (950 - 250)) + 200;
    sfRenderWindow_drawSprite(src->wi, src->m_s->mo, NULL);
}

int test_event(ini_p *src, posit_p *po, s_time_p *clock_g)
{
    if (src->m_s->event.type == sfEvtClosed || 
    sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(src->wi);
    sfText_setColor(src->h_s->te_pl, sfBlack);
    sfText_setColor(src->te_end, sfBlack);
    if (((po->p_t_pl.x - 20) <= po->p_ms.x) && ((po->p_t_pl.x + 170) >= 
    po->p_ms.x) && ((po->p_t_pl.y - 50) <= po->p_ms.y) && 
    ((po->p_t_pl.y + 50) >= po->p_ms.y) && (src->game == 0))
        sfText_setColor(src->h_s->te_pl, sfRed);
    if (((po->p_te_end.x - 25) <= po->p_ms.x) && ((po->p_te_end.x + 125) >= 
    po->p_ms.x) && ((po->p_te_end.y - 25) <= po->p_ms.y) 
    && ((po->p_te_end.y + 100) >= po->p_ms.y))
        sfText_setColor(src->te_end, sfRed);
    event_clic(src, po, clock_g);
}

void event_clic(ini_p *src, posit_p *po, s_time_p *clock_g)
{
    if (src->m_s->event.type == sfEvtMouseButtonPressed) {
        shot(src);
        if ((po->p_m_b.x <= po->p_ms.x) && ((po->p_m_b.x + 150) >= 
        po->p_ms.x) && (po->p_m_b.y <= po->p_ms.y) && 
        ((po->p_m_b.y + 165) >= po->p_ms.y))
            hit(src, po);
        if (((po->p_te_end.x - 25) <= po->p_ms.x) && ((po->p_te_end.x + 125) 
        >= po->p_ms.x) && ((po->p_te_end.y - 25) <= po->p_ms.y) 
        && ((po->p_te_end.y + 100) >= po->p_ms.y))
            clic_end(src, po);
        event_start(src, po, clock_g);
    }
}