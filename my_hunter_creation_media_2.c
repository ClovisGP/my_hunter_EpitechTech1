/*
** EPITECH PROJECT, 2019
** my_hunter_creation_media_2.c
** File description:
** creation text for my_hunter
*/
#include "include/proto_my_hunter.h"

int text_creation(ini_p *src, posit_p *po)
{
    src->h_s->f_pl = sfFont_createFromFile("resc/black_pearl.ttf");
    if (!src->h_s->f_pl)
        return (84);
    src->h_s->te_pl = sfText_create();
    sfText_setFont(src->h_s->te_pl, src->h_s->f_pl);
    sfText_setCharacterSize(src->h_s->te_pl, 60);
    sfText_setColor(src->h_s->te_pl, sfBlack);
    po->p_t_pl.x = 1335;
    po->p_t_pl.y = 110;
    sfText_setPosition(src->h_s->te_pl, po->p_t_pl);
    src->h_s->f_cb = sfFont_createFromFile("resc/bad_time.ttf");
    if (!src->h_s->f_cb)
        return (84);
    src->h_s->te_cb = sfText_create();
    sfText_setFont(src->h_s->te_cb, src->h_s->f_cb);
    sfText_setCharacterSize(src->h_s->te_cb, 35);
    sfText_setColor(src->h_s->te_cb, sfBlack);
    po->p_t_cb.x = 910;
    po->p_t_cb.y = 665;
    sfText_setPosition(src->h_s->te_cb, po->p_t_cb);
    return (text_creation_2(src, po));
}

int text_creation_2(ini_p *src, posit_p *po)
{
    src->h_s->te_li = sfText_create();
    sfText_setString(src->h_s->te_li, "3");
    sfText_setFont(src->h_s->te_li, src->h_s->f_cb);
    sfText_setCharacterSize(src->h_s->te_li, 60);
    sfText_setColor(src->h_s->te_li, sfBlack);
    po->p_t_li.x = 250;
    po->p_t_li.y = 40;
    sfText_setPosition(src->h_s->te_li, po->p_t_li);
    src->h_s->te_tl = sfText_create();
    sfText_setFont(src->h_s->te_tl, src->h_s->f_cb);
    sfText_setCharacterSize(src->h_s->te_tl, 60);
    sfText_setColor(src->h_s->te_tl, sfBlack);
    po->p_t_tl.x = 85;
    po->p_t_tl.y = 40;
    sfText_setPosition(src->h_s->te_tl, po->p_t_tl);
    return (text_creation_3(src, po));
}

int text_creation_3(ini_p *src, posit_p *po)
{
    src->h_s->te_sc = sfText_create();
    sfText_setFont(src->h_s->te_sc, src->h_s->f_cb);
    sfText_setCharacterSize(src->h_s->te_sc, 60);
    sfText_setColor(src->h_s->te_sc, sfBlack);
    po->p_t_sc.x = 975;
    po->p_t_sc.y = 90;
    sfText_setPosition(src->h_s->te_sc, po->p_t_sc);

    src->te_end = sfText_create();
    sfText_setFont(src->te_end, src->h_s->f_cb);
    sfText_setCharacterSize(src->te_end, 70);
    sfText_setColor(src->te_end, sfBlack);
    po->p_te_end.x = 1735;
    po->p_te_end.y = 165;
    sfText_setPosition(src->te_end, po->p_te_end);
    sfText_setString(src->te_end, "End");
    sfText_setString(src->h_s->te_pl, "Play");
    sfText_setString(src->h_s->te_tl, "Life =");
    sfText_setString(src->h_s->te_cb, "Les Daltons volent notre argent !");
    return (0);
}

int sprite_2(ini_p *src, posit_p *po)
{
    src->m_s->t_m_b = sfTexture_createFromFile("resc/m_b.png", NULL);
    if (!src->m_s->t_m_b)
        return (84);
    src->m_s->m_b = sfSprite_create();
    sfSprite_setTexture(src->m_s->m_b, src->m_s->t_m_b, sfTrue);
    po->p_m_b.x = -200;
    po->p_m_b.y = (rand() % (950 - 250)) + 200;
    sfSprite_setPosition(src->m_s->m_b, po->p_m_b);
    src->m_s->t_mo = sfTexture_createFromFile("resc/mo.png", NULL);
    if (!src->m_s->t_mo)
        return (84);
    src->m_s->mo = sfSprite_create();
    sfSprite_setTexture(src->m_s->mo, src->m_s->t_mo, sfTrue);
    src->m_s->t_bub = sfTexture_createFromFile("resc/bub.png", NULL);
    if (!src->m_s->t_bub)
        return (84);
    src->m_s->bub = sfSprite_create();
    sfSprite_setTexture(src->m_s->bub, src->m_s->t_bub, sfTrue);
    po->p_bub.x = 860;
    po->p_bub.y = 610;
    sfSprite_setPosition(src->m_s->bub, po->p_bub);
}