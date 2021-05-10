/*
** EPITECH PROJECT, 2021
** anim_player.c
** File description:
** anim_player
*/

#include "../../include/my_rpg.h"

void anime_player_down(game_t *gm)
{
    gm->play->ear->time = sfClock_getElapsedTime(gm->play->ear->clock);
    gm->play->ear->second = gm->play->ear->time.microseconds / 1000000.0;
    if (gm->play->ear->second > 0.3) {
        if (gm->play->ear->r_player.left < 96)
            gm->play->ear->r_player.left += 48;
        else
            gm->play->ear->r_player.left = 0;
        sfClock_restart(gm->play->ear->clock);
    }
}

void anime_player_left(game_t *gm)
{
    gm->play->ear->time = sfClock_getElapsedTime(gm->play->ear->clock);
    gm->play->ear->second = gm->play->ear->time.microseconds / 1000000.0;
    if (gm->play->ear->second > 0.3) {
        if (gm->play->ear->r_player.left >= 144 &&
        gm->play->ear->r_player.left < 240)
            gm->play->ear->r_player.left += 48;
        else
            gm->play->ear->r_player.left = 144;
        sfClock_restart(gm->play->ear->clock);
    }
}

void anime_player_right(game_t *gm)
{
    gm->play->ear->time = sfClock_getElapsedTime(gm->play->ear->clock);
    gm->play->ear->second = gm->play->ear->time.microseconds / 1000000.0;
    if (gm->play->ear->second > 0.3) {
        if (gm->play->ear->r_player.left >= 288 &&
        gm->play->ear->r_player.left < 384)
            gm->play->ear->r_player.left += 48;
        else
            gm->play->ear->r_player.left = 288;
        sfClock_restart(gm->play->ear->clock);
    }
}

void anime_player_up(game_t *gm)
{
    gm->play->ear->time = sfClock_getElapsedTime(gm->play->ear->clock);
    gm->play->ear->second = gm->play->ear->time.microseconds / 1000000.0;
    if (gm->play->ear->second > 0.3) {
        if (gm->play->ear->r_player.left >= 432 &&
        gm->play->ear->r_player.left < 528)
            gm->play->ear->r_player.left += 48;
        else
            gm->play->ear->r_player.left = 432;
        sfClock_restart(gm->play->ear->clock);
    }
}