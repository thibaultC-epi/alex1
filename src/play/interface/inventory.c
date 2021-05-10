/*
** EPITECH PROJECT, 2021
** inventory.c
** File description:
** inventory
*/

#include "../../include/my_rpg.h"

void draw_sprite(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->play->inv->inv, NULL);
}

void inventory(game_t *gm)
{
    draw_sprite(gm);
}