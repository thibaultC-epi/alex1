/*
** EPITECH PROJECT, 2021
** moove_map.c
** File description:
** moove_map
*/

#include "../../include/my_rpg.h"

void up_moove_map(game_t *gm)
{
    for (int i = 0; i < 8; i++) {
        gm->play->s_map->pos_planet[i].y += 10;
        if (i < 4) {
            gm->play->s_map->pos_map[i].y += 10;
            sfSprite_setPosition(gm->play->s_map->map[i],
            gm->play->s_map->pos_map[i]);
        }
        sfSprite_setPosition(gm->play->s_map->planet[i],
        gm->play->s_map->pos_planet[i]);
    }
    gm->play->s_map->pos_planet[12].y += 10;
    sfSprite_setPosition(gm->play->s_map->planet[12],
    gm->play->s_map->pos_planet[12]);
}

void right_moove_map(game_t *gm)
{
    for (int i = 0; i < 8; i++) {
        gm->play->s_map->pos_planet[i].x -= 10;
        if (i < 4) {
            gm->play->s_map->pos_map[i].x -= 10;
            sfSprite_setPosition(gm->play->s_map->map[i],
            gm->play->s_map->pos_map[i]);
        }
        sfSprite_setPosition(gm->play->s_map->planet[i],
        gm->play->s_map->pos_planet[i]);
    }
    gm->play->s_map->pos_planet[12].x -= 10;
    sfSprite_setPosition(gm->play->s_map->planet[12],
    gm->play->s_map->pos_planet[12]);
}

void down_moove_map(game_t *gm)
{
    for (int i = 0; i < 8; i++) {
        gm->play->s_map->pos_planet[i].y -= 10;
        if (i < 4) {
            gm->play->s_map->pos_map[i].y -= 10;
            sfSprite_setPosition(gm->play->s_map->map[i],
            gm->play->s_map->pos_map[i]);
        }
        sfSprite_setPosition(gm->play->s_map->planet[i],
        gm->play->s_map->pos_planet[i]);
    }
    gm->play->s_map->pos_planet[12].y -= 10;
    sfSprite_setPosition(gm->play->s_map->planet[12],
    gm->play->s_map->pos_planet[12]);
}

void left_moove_map(game_t *gm)
{
    for (int i = 0; i < 8; i++) {
        gm->play->s_map->pos_planet[i].x += 10;
        if (i < 4) {
            gm->play->s_map->pos_map[i].x += 10;
            sfSprite_setPosition(gm->play->s_map->map[i],
            gm->play->s_map->pos_map[i]);
        }
        sfSprite_setPosition(gm->play->s_map->planet[i],
        gm->play->s_map->pos_planet[i]);
    }
    gm->play->s_map->pos_planet[12].x += 10;
    sfSprite_setPosition(gm->play->s_map->planet[12],
    gm->play->s_map->pos_planet[12]);
}

void moove_map(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp &&
    gm->play->s_map->dir_ship == 0 &&
    gm->play->s_map->i == -1 &&
    gm->play->s_map->pos_ship.y == 526.5)
        up_moove_map(gm);
    if (gm->ev->event.key.code == sfKeyRight &&
    gm->play->s_map->dir_ship == 90 &&
    gm->play->s_map->i == -1 &&
    gm->play->s_map->pos_ship.x == 960)
        right_moove_map(gm);
    if (gm->ev->event.key.code == sfKeyDown &&
    gm->play->s_map->dir_ship == 180 &&
    gm->play->s_map->i == -1 &&
    gm->play->s_map->pos_ship.y == 526.5)
        down_moove_map(gm);
    if (gm->ev->event.key.code == sfKeyLeft &&
    gm->play->s_map->dir_ship == 270 &&
    gm->play->s_map->i == -1 &&
    gm->play->s_map->pos_ship.x == 960)
        left_moove_map(gm);
}