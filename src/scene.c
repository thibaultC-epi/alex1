/*
** EPITECH PROJECT, 2021
** scene.c
** File description:
** scene
*/

#include "include/my_rpg.h"

void scene(game_t *gm)
{
    if (gm->scene == 1) {
        play(gm);
    }
}