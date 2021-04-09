/*
** EPITECH PROJECT, 2021
** check_limit.c
** File description:
** check_limit
*/

#include "../../include/my_rpg.h"

void check_limit_map_true(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp &&
    gm->play->s_map->pos_map[2].y + 10 > 0 &&
    gm->play->s_map->pos_map[3].y + 10 > 0)
        gm->play->s_map->lim_map = 1;
    if (gm->ev->event.key.code == sfKeyRight &&
    gm->play->s_map->pos_map[0].x - 10 < -1920 &&
    gm->play->s_map->pos_map[2].x - 10 < -1920)
        gm->play->s_map->lim_map = 1;
    if (gm->ev->event.key.code == sfKeyDown &&
    gm->play->s_map->pos_map[0].y - 10 < -1107 &&
    gm->play->s_map->pos_map[1].y - 10 < -1107)
        gm->play->s_map->lim_map = 1;
    if (gm->ev->event.key.code == sfKeyLeft &&
    gm->play->s_map->pos_map[1].x + 10 > 0 &&
    gm->play->s_map->pos_map[3].x + 10 > 0)
        gm->play->s_map->lim_map = 1;
}

void check_limit_map_false(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp &&
    gm->play->s_map->pos_map[2].y + 10 <= 0 &&
    gm->play->s_map->pos_map[3].y + 10 <= 0)
        gm->play->s_map->lim_map = 0;
    if (gm->ev->event.key.code == sfKeyRight &&
    gm->play->s_map->pos_map[0].x - 10 >= 0 &&
    gm->play->s_map->pos_map[2].x - 10 >= 0)
        gm->play->s_map->lim_map = 0;
    if (gm->ev->event.key.code == sfKeyDown &&
    gm->play->s_map->pos_map[0].y - 10 >= 0 &&
    gm->play->s_map->pos_map[1].y - 10 >= 0)
        gm->play->s_map->lim_map = 0;
    if (gm->ev->event.key.code == sfKeyLeft &&
    gm->play->s_map->pos_map[1].x + 10 <= 0 &&
    gm->play->s_map->pos_map[3].x + 10 <= 0)
        gm->play->s_map->lim_map = 0;
}

void check_ship_limit_map_true(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp &&
    gm->play->s_map->pos_ship.y - 10 < 0)
        gm->play->s_map->ship_lim_map = 1;
    if (gm->ev->event.key.code == sfKeyRight &&
    gm->play->s_map->pos_ship.x + 10 > 1920)
        gm->play->s_map->ship_lim_map = 1;
    if (gm->ev->event.key.code == sfKeyDown &&
    gm->play->s_map->pos_ship.y + 10 > 1053)
        gm->play->s_map->ship_lim_map = 1;
    if (gm->ev->event.key.code == sfKeyLeft &&
    gm->play->s_map->pos_ship.x - 10 < 0)
        gm->play->s_map->ship_lim_map = 1;
}

void check_ship_limit_map_false(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp &&
    gm->play->s_map->pos_ship.y - 10 < 526.5 &&
    gm->play->s_map->pos_map[0].y - 10 < -1107 &&
    gm->play->s_map->pos_map[1].y - 10 < -1107)
        gm->play->s_map->ship_lim_map = 0;
    if (gm->ev->event.key.code == sfKeyRight &&
    gm->play->s_map->pos_ship.x + 10 > 960 &&
    gm->play->s_map->pos_map[1].x + 10 > 0 &&
    gm->play->s_map->pos_map[3].x + 10 > 0)
        gm->play->s_map->ship_lim_map = 0;
    if (gm->ev->event.key.code == sfKeyDown &&
    gm->play->s_map->pos_ship.y + 10 > 526.5 &&
    gm->play->s_map->pos_map[2].y + 10 > 0 &&
    gm->play->s_map->pos_map[3].y + 10 > 0)
        gm->play->s_map->ship_lim_map = 0;
    if (gm->ev->event.key.code == sfKeyLeft &&
    gm->play->s_map->pos_ship.x - 10 < 960 &&
    gm->play->s_map->pos_map[0].x - 10 < -1920 &&
    gm->play->s_map->pos_map[2].x - 10 < -1920)
        gm->play->s_map->ship_lim_map = 0;
}

void check_ship_mooving_okay(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp &&
    gm->play->s_map->pos_ship.y - 10 >= 526.5 &&
    gm->play->s_map->pos_ship.y - 10 <= 1053)
        gm->play->s_map->ship_lim_map = 2;
    if (gm->ev->event.key.code == sfKeyRight &&
    gm->play->s_map->pos_ship.x + 10 <= 960 &&
    gm->play->s_map->pos_ship.x + 10 >= 0)
        gm->play->s_map->ship_lim_map = 2;
    if (gm->ev->event.key.code == sfKeyDown &&
    gm->play->s_map->pos_ship.y + 10 <= 526.5 &&
    gm->play->s_map->pos_ship.y + 10 >= 0)
        gm->play->s_map->ship_lim_map = 2;
    if (gm->ev->event.key.code == sfKeyLeft &&
    gm->play->s_map->pos_ship.x - 10 >= 960 &&
    gm->play->s_map->pos_ship.x - 10 <= 1920)
        gm->play->s_map->ship_lim_map = 2;
}