/*
** EPITECH PROJECT, 2019
** proto_my_hunter.h
** File description:
** contain prototypes and librairies for my_hunter
*/
#include "stdlib.h"
#include "my.h"
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/OpenGL.h>
#include <SFML/Audio.h>

struct hud {
    sfTexture *t_bg;
    sfTexture *t_par;
    sfTexture *t_pan_f;
    sfTexture *t_pan_s;
    sfTexture *t_pan_th;
    sfTexture *t_achie;
    sfSprite *bg;
    sfSprite *par;
    sfSprite *pan_f;
    sfSprite *pan_s;
    sfSprite *pan_th;
    sfSprite *achie;
    sfFont *f_cb;
    sfFont *f_pl;
    sfText *te_pl;
    sfText *te_cb;
    sfText *te_sc;
    sfText *te_tl;
    sfText *te_li;
    sfMusic *ost;
};
typedef struct hud hud_p;
struct move {
    sfTexture *t_tar;
    sfTexture *t_m_b;
    sfTexture *t_mo;
    sfTexture *t_cow;
    sfTexture *t_bub;
    sfSprite *tar;
    sfSprite *m_b;
    sfSprite *mo;
    sfSprite *cow;
    sfSprite *bub;
    sfMusic *sh_so;
    sfEvent event;
    sfIntRect rect;
    sfIntRect rect_achie;
};
typedef struct move move_p;
struct ini {
    sfRenderWindow *wi;
    struct hud *h_s;
    struct move *m_s;
    sfText *te_end;
    int score;
    int life;
    int game;
};
typedef struct ini ini_p;
struct posit {
    sfVector2f p_tar;
    sfVector2f p_par;
    sfVector2f p_pan_f;
    sfVector2f p_pan_s;
    sfVector2f p_pan_th;
    sfVector2f p_t_pl;
    sfVector2f p_t_cb;
    sfVector2f p_t_sc;
    sfVector2f p_t_li;
    sfVector2f p_m_b;
    sfVector2f p_mo;
    sfVector2f p_cow;
    sfVector2f p_bub;
    sfVector2i p_ms;
    sfVector2f p_t_tl;
    sfVector2f p_te_end;
    sfVector2f p_achie;
};
typedef struct posit posit_p;
struct s_time {
    sfClock *clock_v;
    sfTime time_v;
    float second;
    sfClock *clock_m;
    sfTime time_m;
    float second_m;
    sfClock *clock_a;
    sfTime time_a;
    float second_a;
    sfClock *clock_h;
    sfTime time_h;
    float second_h;
};
typedef struct s_time s_time_p;
void display_help(void);
int animation_cb(ini_p *src, posit_p *po, s_time_p *clock_g);
int move_money_bag(ini_p *src, posit_p *po, s_time_p *clock_g);
void destroy_media(ini_p *src, s_time_p *clock_g);
void destroy_media_2(ini_p *src, s_time_p *clock_g);
void event_clic(ini_p *src, posit_p *po, s_time_p *clock_g);
void event_start(ini_p *src, posit_p *po, s_time_p *clock_g);
int hit(ini_p *src, posit_p *po);
int text_creation(ini_p *src, posit_p *po);
int text_creation_2(ini_p *src, posit_p *po);
int text_creation_3(ini_p *src, posit_p *po);
int test_event(ini_p *src, posit_p *po, s_time_p *clock_g);
int time_run(s_time_p *clock_g);
int music(ini_p *src);
char *my_int_to_str(int nb);
int set_position(ini_p *src, posit_p *po, s_time_p *clock_g);
int shot(ini_p *src);
int sprite(ini_p *src, posit_p *po);
int sprite_2(ini_p *src, posit_p *po);
int draw_sprite(ini_p *src, s_time_p *clock_g);
int draw_sprite_2(ini_p *src, s_time_p *clock_g);
int sprite_hud_3(ini_p *src, posit_p *po);
int sprite_hud(ini_p *src, posit_p *po);
int sprite_hud_2(ini_p *src, posit_p *po);
int window_create(ini_p *src);
int window_display(ini_p *src, posit_p *po, s_time_p *clock_g);
void clic_end(ini_p *src, posit_p *po);