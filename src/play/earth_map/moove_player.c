/*
** EPITECH PROJECT, 2021
** moove_player.c
** File description:
** moove_player
*/

#include "../../include/my_rpg.h"

void moove_down_player(game_t *gm)
{
    int i = 0;

    if ((((gm->play->ear->pos_player.y / 48) - 6.75 < 8 &&
    gm->play->ear->mp->y_1 == 0) || (gm->play->ear->pos_player.y / 48 -
    6.75 >= 8 && gm->play->ear->mp->y_2 == 100)) && gm->play->ear->mp->obs
    == 0) {
        gm->play->ear->mp->y_p += 1;
        gm->play->ear->pos_player.y += 48;
        gm->play->ear->mp->m_press = 1;
        sfSprite_setPosition(gm->play->ear->player, gm->play->ear->pos_player);
        i = 1;
    } if ((gm->play->ear->pos_player.y / 48) - 3 == 8 &&
    gm->play->ear->mp->obs == 0 && (gm->play->ear->mp->y_1 != 0 ||
    gm->play->ear->mp->y_2 != 100) && i == 0) {
        mooving_map_down(gm);
        gm->play->ear->mp->y_p += 1;
        gm->play->ear->mp->m_press = 1;
    }
}

void moove_left_player(game_t *gm)
{
    int i = 0;

    if ((((gm->play->ear->pos_player.x / 48) - 6.75 <= 13 &&
    gm->play->ear->mp->x_1 == 0) || (gm->play->ear->pos_player.x / 48 -
    6.75 > 13 && gm->play->ear->mp->x_2 == 100)) && gm->play->ear->mp->obs
    == 0) {
        gm->play->ear->mp->x_p -= 1;
        gm->play->ear->pos_player.x -= 48;
        gm->play->ear->mp->m_press = 1;
        sfSprite_setPosition(gm->play->ear->player, gm->play->ear->pos_player);
        i = 1;
    } if ((gm->play->ear->pos_player.x / 48) - 6.75 == 13 &&
    gm->play->ear->mp->obs == 0 && (gm->play->ear->mp->x_1 != 0 ||
    gm->play->ear->mp->x_2 != 100) && i == 0) {
        mooving_map_left(gm);
        gm->play->ear->mp->x_p -= 1;
        gm->play->ear->mp->m_press = 1;
    }
}

void moove_right_player(game_t *gm)
{
    int i = 0;

    if ((((gm->play->ear->pos_player.x / 48) - 6.75 < 13 &&
    gm->play->ear->mp->x_1 == 0) || (gm->play->ear->pos_player.x / 48 -
    6.75 >= 13 && gm->play->ear->mp->x_2 == 100)) && gm->play->ear->mp->obs
    == 0) {
        gm->play->ear->mp->x_p += 1;
        gm->play->ear->pos_player.x += 48;
        gm->play->ear->mp->m_press = 1;
        sfSprite_setPosition(gm->play->ear->player, gm->play->ear->pos_player);
        i = 1;
    } if ((gm->play->ear->pos_player.x / 48) - 6.75 == 13 &&
    gm->play->ear->mp->obs == 0 && (gm->play->ear->mp->x_1 != 0 ||
    gm->play->ear->mp->x_2 != 100) && i == 0) {
        mooving_map_right(gm);
        gm->play->ear->mp->x_p += 1;
        gm->play->ear->mp->m_press = 1;
    }
}

void moove_up_player(game_t *gm)
{
    int i = 0;

    if ((((gm->play->ear->pos_player.y / 48) - 6.75 <= 8 &&
    gm->play->ear->mp->y_1 == 0) || (gm->play->ear->pos_player.y / 48 -
    6.75 > 8 && gm->play->ear->mp->y_2 == 100)) && gm->play->ear->mp->obs
    == 0) {
        gm->play->ear->mp->y_p -= 1;
        gm->play->ear->pos_player.y -= 48;
        gm->play->ear->mp->m_press = 1;
        sfSprite_setPosition(gm->play->ear->player, gm->play->ear->pos_player);
        i = 1;
    } if ((gm->play->ear->pos_player.y / 48) - 3 == 8 &&
    gm->play->ear->mp->obs == 0 && (gm->play->ear->mp->y_1 != 0 ||
    gm->play->ear->mp->y_2 != 100) && i == 0) {
        mooving_map_up(gm);
        gm->play->ear->mp->y_p -= 1;
        gm->play->ear->mp->m_press = 1;
    }
}