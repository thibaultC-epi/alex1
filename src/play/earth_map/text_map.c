/*
** EPITECH PROJECT, 2021
** struct_text_map.c
** File description:
** struct_text_map
*/

#include "../../include/my_rpg.h"

void destroy_sprite(game_t *gm)
{
    for (int i = 0; i < 459; i++)
        sfSprite_destroy(gm->play->ear->map[gm->play->ear->mp->i][i]);
    gm->play->ear->start = 0;
}

void creation_sprite(game_t *gm)
{
    if (gm->play->ear->start == 1)
        destroy_sprite(gm);
    for (int i = 0; i < 459; i++) {
            gm->play->ear->map[gm->play->ear->mp->i][i] = sfSprite_create();
            gm->play->ear->r_map[gm->play->ear->mp->i][i].width = 24;
            gm->play->ear->r_map[gm->play->ear->mp->i][i].height = 24;
    }
}