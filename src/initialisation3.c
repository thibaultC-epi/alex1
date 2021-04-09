/*
** EPITECH PROJECT, 2021
** initialisation3.c
** File description:
** initialisation3
*/

#include "include/my_rpg.h"

void init_pos_ship(game_t *gm)
{
    if (gm->play->s_map->ship_val == 0) {
        sfSprite_setOrigin(gm->play->s_map->ship,
        (sfVector2f){30, 57});
        gm->play->s_map->pos_ship.x = 960;
        gm->play->s_map->pos_ship.y = 526.5;
    } if (gm->play->s_map->ship_val == 1) {
        sfSprite_setOrigin(gm->play->s_map->ship,
        (sfVector2f){50, 47});
        gm->play->s_map->pos_ship.x = 960;
        gm->play->s_map->pos_ship.y = 526.5;
    }
}