/*
** EPITECH PROJECT, 2021
** direction_ship.c
** File description:
** direction_ship
*/

#include "../../include/my_rpg.h"

void up_direction_ship(game_t *gm)
{
    if (gm->play->s_map->dir_ship != 0) {
        gm->play->s_map->time = sfClock_getElapsedTime(gm->play->s_map->clock);
        gm->play->s_map->second = gm->play->s_map->time.microseconds /
        1000000.0;
        if (gm->play->s_map->second > 1) {
            if (gm->play->s_map->dir_ship >= 180)
                gm->play->s_map->dir_ship += 1;
            else
                gm->play->s_map->dir_ship -= 1;
            if (gm->play->s_map->dir_ship == 360)
                gm->play->s_map->dir_ship = 0;
        }
        sfSprite_setRotation(gm->play->s_map->ship,
        gm->play->s_map->dir_ship);
        sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->ship,
        NULL);
    } if (gm->play->s_map->dir_ship == 0)
        gm->play->s_map->i = -1;
}

void right_direction_ship(game_t *gm)
{
    if (gm->play->s_map->dir_ship != 90) {
        gm->play->s_map->time = sfClock_getElapsedTime(gm->play->s_map->clock);
        gm->play->s_map->second = gm->play->s_map->time.microseconds /
        1000000.0;
        if (gm->play->s_map->second > 1) {
            if (gm->play->s_map->dir_ship >= 270 ||
            gm->play->s_map->dir_ship < 90)
                gm->play->s_map->dir_ship += 1;
            else
                gm->play->s_map->dir_ship -= 1;
            if (gm->play->s_map->dir_ship == 360)
                gm->play->s_map->dir_ship = 0;
        }
        sfSprite_setRotation(gm->play->s_map->ship,
        gm->play->s_map->dir_ship);
        sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->ship,
        NULL);
    } if (gm->play->s_map->dir_ship == 90)
        gm->play->s_map->i = -1;
}

void down_direction_ship(game_t *gm)
{
    if (gm->play->s_map->dir_ship != 180) {
        gm->play->s_map->time = sfClock_getElapsedTime(gm->play->s_map->clock);
        gm->play->s_map->second = gm->play->s_map->time.microseconds /
        1000000.0;
        if (gm->play->s_map->second > 1) {
            if (gm->play->s_map->dir_ship >= 0 &&
            gm->play->s_map->dir_ship < 180)
                gm->play->s_map->dir_ship += 1;
            else
                gm->play->s_map->dir_ship -= 1;
            if (gm->play->s_map->dir_ship == 360)
                gm->play->s_map->dir_ship = 0;
        }
        sfSprite_setRotation(gm->play->s_map->ship,
        gm->play->s_map->dir_ship);
        sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->ship,
        NULL);
    } if (gm->play->s_map->dir_ship == 180)
        gm->play->s_map->i = -1;
}

void left_direction_ship(game_t *gm)
{
    if (gm->play->s_map->dir_ship != 270) {
        gm->play->s_map->time = sfClock_getElapsedTime(gm->play->s_map->clock);
        gm->play->s_map->second = gm->play->s_map->time.microseconds /
        1000000.0;
        if (gm->play->s_map->second > 1) {
            if (gm->play->s_map->dir_ship >= 90 &&
            gm->play->s_map->dir_ship < 270)
                gm->play->s_map->dir_ship += 1;
            else {
                if (gm->play->s_map->dir_ship == 0)
                    gm->play->s_map->dir_ship = 360;
                gm->play->s_map->dir_ship -= 1;
            }
            if (gm->play->s_map->dir_ship == 360)
                gm->play->s_map->dir_ship = 0;
        }
        sfSprite_setRotation(gm->play->s_map->ship,
        gm->play->s_map->dir_ship);
        sfRenderWindow_drawSprite(gm->win->win, gm->play->s_map->ship,
        NULL);
    } if (gm->play->s_map->dir_ship == 270)
        gm->play->s_map->i = -1;
}

void set_direction_ship(game_t *gm)
{
    if (gm->play->s_map->i == 0)
        up_direction_ship(gm);
    if (gm->play->s_map->i == 1)
        right_direction_ship(gm);
    if (gm->play->s_map->i == 2)
        down_direction_ship(gm);
    if (gm->play->s_map->i == 3)
        left_direction_ship(gm);
}