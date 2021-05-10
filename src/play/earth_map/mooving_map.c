/*
** EPITECH PROJECT, 2021
** mooving_map.c
** File description:
** mooving_map
*/

#include "../../include/my_rpg.h"

void mooving_map_right(game_t *gm)
{
    if (gm->play->ear->mp->x_2 < 100) {
        gm->play->ear->mp->x_1 += 1;
        gm->play->ear->mp->x_2 += 1;
        gm->play->ear->mp->i = 0;
    }
}

void mooving_map_left(game_t *gm)
{
    if (gm->play->ear->mp->x_1 > 0) {
        gm->play->ear->mp->x_1 -= 1;
        gm->play->ear->mp->x_2 -= 1;
        gm->play->ear->mp->i = 0;
    }
}

void mooving_map_down(game_t *gm)
{
    if (gm->play->ear->mp->y_2 < 100) {
        gm->play->ear->mp->y_1 += 1;
        gm->play->ear->mp->y_2 += 1;
        gm->play->ear->mp->i = 0;
    }
}

void mooving_map_up(game_t *gm)
{
    if (gm->play->ear->mp->y_1 > 0) {
        gm->play->ear->mp->y_1 -= 1;
        gm->play->ear->mp->y_2 -= 1;
        gm->play->ear->mp->i = 0;
    }
}