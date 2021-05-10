/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_rpg.h"

void reset_game(game_t *gm)
{
    struct_fill_stats_character(gm->final);
}

void draw_win(game_t *gm)
{
    if (gm->final->win == 1) {
        gm->scene = 0;
        gm->final->win = 0;
    }
}