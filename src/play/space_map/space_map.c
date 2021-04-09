/*
** EPITECH PROJECT, 2021
** space_map.c
** File description:
** space_map
*/

#include "../../include/my_rpg.h"

void direction_ship_event(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp &&
    gm->play->s_map->dir_ship != 0) {
        gm->play->s_map->i = 0;
    } if (gm->ev->event.key.code == sfKeyRight &&
    gm->play->s_map->dir_ship != 90) {
        gm->play->s_map->i = 1;
    } if (gm->ev->event.key.code == sfKeyDown &&
    gm->play->s_map->dir_ship != 180) {
        gm->play->s_map->i = 2;
    } if (gm->ev->event.key.code == sfKeyLeft &&
    gm->play->s_map->dir_ship != 270) {
        gm->play->s_map->i = 3;
    }
}

void mooving_on_map(game_t *gm)
{
    if (gm->play->s_map->ship_lim_map == 0) {
        check_limit_map_true(gm);
        check_limit_map_false(gm);
    } if (gm->play->s_map->lim_map == 0)
        moove_map(gm);
    if (gm->play->s_map->lim_map == 1 &&
    gm->play->s_map->ship_lim_map == 0)
        gm->play->s_map->ship_lim_map = 2;
    if (gm->play->s_map->lim_map == 1) {
        check_ship_limit_map_true(gm);
        check_ship_limit_map_false(gm);
        if (gm->play->s_map->ship_lim_map == 2)
            moove_ship(gm);
        if (gm->play->s_map->ship_lim_map != 0)
            gm->play->s_map->ship_lim_map = 2;
    }
}

void event_map(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        if (gm->ev->event.type == sfEvtKeyPressed) {
            direction_ship_event(gm);
            mooving_on_map(gm);
            sfSprite_setPosition(gm->play->s_map->ship,
            gm->play->s_map->pos_ship);
        }
    }
}

void draw_space_map(game_t *gm)
{
    for (int i = 0; i < 4; i++) {
        sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->map[i],
        NULL);
    }
    for (int i = 0; i < 8; i++) {
        sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->planet[i],
        NULL);
    }
    sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->planet[12],
    NULL);
    if (gm->play->s_map->i == -1) {
        sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->ship,
        NULL);
    }
}

void space_map(game_t *gm)
{
    event_map(gm);
    sfSprite_setTexture(gm->play->s_map->ship,
    gm->play->s_map->t_ship[gm->play->s_map->ship_val], sfTrue);
    draw_space_map(gm);
    set_direction_ship(gm);
}