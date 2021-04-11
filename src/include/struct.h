/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct stats
{
    sfSprite *stats;
    sfSprite *charac;
    sfTexture *t_char;
    sfTexture *t_stats;
}stats_t;

typedef struct space_map
{
    int ship_val;
    sfSprite *planet[13];
    sfSprite *map[4];
    sfSprite *ship;
    sfTexture *t_ship[2];
    sfTexture *t_map;
    sfTexture *c_planet[8];
    sfTexture *s_planet[5];
    sfIntRect r_planet[12];
    sfVector2f pos_planet[13];
    sfVector2f pos_map[4];
    sfVector2f pos_ship;
    sfClock *clock;
    sfTime time;
    float second;
    float dir_ship;
    int i;
    int lim_map;
    int ship_lim_map;
    int j;
}space_map_t;

typedef struct inventory
{
    sfSprite *inv;
    sfTexture *t_inv;
    sfVector2f p_inv;
    int press;
}inventory_t;

typedef struct play
{
    int scene_play;
    sfSprite *back;
    sfTexture *t_back;
    inventory_t *inv;
    stats_t *stat;
    space_map_t *s_map;
}play_t;

typedef struct window
{
    sfRenderWindow *win;
    sfVideoMode video_mode;
    sfVector2u size_window;
    sfVector2i mouse_pos;
}window_t;

typedef struct event
{
    sfEvent event;
    sfVector2f size_event;
}event_t;

typedef struct game
{
    int scene;
    window_t *win;
    event_t *ev;
    play_t *play;
}game_t;

#endif /* !STRUCT_H_ */
