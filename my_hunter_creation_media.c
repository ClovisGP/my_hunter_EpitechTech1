/*
** EPITECH PROJECT, 2019
** my_hunter_creation_media.c
** File description:
** fonction for event of my_hunter
*/
#include "include/proto_my_hunter.h"

int music(ini_p *src)
{
    src->h_s->ost = sfMusic_createFromFile("resc/BO_my_hunter.ogg");
    if (!src->h_s->ost)
        return (84);
    sfMusic_setLoop(src->h_s->ost, 1);
    sfMusic_play(src->h_s->ost);
    src->m_s->sh_so = sfMusic_createFromFile("resc/shot_sound.ogg");
    if (!src->m_s->sh_so)
        return (84);
    return (0);
}

int sprite_hud(ini_p *src, posit_p *po)
{
    src->h_s->t_par = sfTexture_createFromFile("resc/par.png", NULL);
    if (!src->h_s->t_par)
        return (84);
    src->h_s->par = sfSprite_create();
    sfSprite_setTexture(src->h_s->par, src->h_s->t_par, sfTrue);
    po->p_par.x = -45;
    po->p_par.y = -350;
    sfSprite_setPosition(src->h_s->par, po->p_par);
    src->h_s->t_pan_f = sfTexture_createFromFile("resc/pan_f.png", NULL);
    if (!src->h_s->t_pan_f)
        return (84);
    src->h_s->pan_f = sfSprite_create();
    sfSprite_setTexture(src->h_s->pan_f, src->h_s->t_pan_f, sfTrue);
    po->p_pan_f.x = 1625;
    po->p_pan_f.y = 20;
    sfSprite_setPosition(src->h_s->pan_f, po->p_pan_f);
    return (sprite_hud_2(src, po));
}

int sprite_hud_2(ini_p *src, posit_p *po)
{
    src->h_s->t_pan_s = sfTexture_createFromFile("resc/pan_s.png", NULL);
    if (!src->h_s->t_pan_s)
        return (84);
    src->h_s->pan_s = sfSprite_create();
    sfSprite_setTexture(src->h_s->pan_s, src->h_s->t_pan_s, sfTrue);
    po->p_pan_s.x = 750;
    po->p_pan_s.y = -40;
    sfSprite_setPosition(src->h_s->pan_s, po->p_pan_s);
    src->h_s->t_achie = sfTexture_createFromFile("resc/achiev.png", NULL);
    if (!src->h_s->t_achie)
        return (84);
    src->h_s->achie = sfSprite_create();
    sfSprite_setTexture(src->h_s->achie, src->h_s->t_achie, sfTrue);
    po->p_achie.x = 360;
    po->p_achie.y = -50;
    sfSprite_setPosition(src->h_s->achie, po->p_achie);
    src->m_s->rect_achie.width = 250;
    src->m_s->rect_achie.height = 250;
    return (sprite_hud_3(src, po));
}

int sprite_hud_3(ini_p *src, posit_p *po)
{
    src->h_s->t_pan_th = sfTexture_createFromFile("resc/pan_th.png", NULL);
    if (!src->h_s->t_pan_th)
        return (84);
    src->h_s->pan_th = sfSprite_create();
    sfSprite_setTexture(src->h_s->pan_th, src->h_s->t_pan_th, sfTrue);
    po->p_pan_th.x = 1250;
    po->p_pan_th.y = -50;
    sfSprite_setPosition(src->h_s->pan_th, po->p_pan_th);
    return (0);
}

int sprite(ini_p *src, posit_p *po)
{
    src->h_s->t_bg = sfTexture_createFromFile("resc/bg.jpg", NULL);
    if (!src->h_s->t_bg)
        return (84);
    src->h_s->bg = sfSprite_create();
    sfSprite_setTexture(src->h_s->bg, src->h_s->t_bg, sfTrue);
    src->m_s->t_tar = sfTexture_createFromFile("resc/tar.png", NULL);
    if (!src->m_s->t_tar)
        return (84);
    src->m_s->tar = sfSprite_create();
    sfSprite_setTexture(src->m_s->tar, src->m_s->t_tar, sfTrue);
    src->m_s->t_cow = sfTexture_createFromFile("resc/cow.png", NULL);
    if (!src->m_s->t_cow)
        return (84);
    src->m_s->cow = sfSprite_create();
    sfSprite_setTexture(src->m_s->cow, src->m_s->t_cow, sfTrue);
    if (sprite_2(src, po) == 84)
        return(84);
    return (0);
}