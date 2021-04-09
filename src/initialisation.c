/*
** EPITECH PROJECT, 2021
** initialisation.c
** File description:
** initialisation
*/

#include "include/my_rpg.h"

void init_window(game_t *gm)
{
    gm->win->win = sfRenderWindow_create(gm->win->video_mode, "My_Defender",
    sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(gm->win->win, 60);
}

void init_inventory(game_t *gm)
{
    sfSprite_setTexture(gm->play->inv->inv, gm->play->inv->t_inv, sfTrue);
    sfSprite_setPosition(gm->play->inv->inv, gm->play->inv->p_inv);
}

void init_play(game_t *gm)
{
    sfSprite_setTexture(gm->play->back, gm->play->t_back, sfTrue);
    init_inventory(gm);
    init_space_map(gm);
}