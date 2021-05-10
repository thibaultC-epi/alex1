/*
** EPITECH PROJECT, 2021
** colision.c
** File description:
** colision
*/

#include "../../include/my_rpg.h"

void check_if_colision_up(game_t *gm)
{
    if (gm->play->ear->mp->obs_map[gm->play->ear->mp->y_p - 1]
    [gm->play->ear->mp->x_p] == 0) {
        gm->play->ear->mp->obs = 0;
    }
}

void check_if_colision_down(game_t *gm)
{
    if (gm->play->ear->mp->obs_map[gm->play->ear->mp->y_p + 1]
    [gm->play->ear->mp->x_p] == 0) {
        gm->play->ear->mp->obs = 0;
    }
}

void check_if_colision_right(game_t *gm)
{
    if (gm->play->ear->mp->obs_map[gm->play->ear->mp->y_p]
    [gm->play->ear->mp->x_p + 1] == 0) {
        gm->play->ear->mp->obs = 0;
    }
}

void check_if_colision_left(game_t *gm)
{
    if (gm->play->ear->mp->obs_map[gm->play->ear->mp->y_p]
    [gm->play->ear->mp->x_p - 1] == 0) {
        gm->play->ear->mp->obs = 0;
    }
}

void init_no_colision(game_t *gm)
{
    gm->play->ear->mp->no_col[0] = 2898;
    gm->play->ear->mp->no_col[1] = 2884;
    gm->play->ear->mp->no_col[2] = 2900;
    gm->play->ear->mp->no_col[3] = 2880;
    gm->play->ear->mp->no_col[4] = 2864;
    gm->play->ear->mp->no_col[5] = 2888;
    gm->play->ear->mp->no_col[6] = 2866;
    gm->play->ear->mp->no_col[7] = 2865;
    gm->play->ear->mp->no_col[8] = 2904;
    gm->play->ear->mp->no_col[9] = 2892;
    gm->play->ear->mp->no_col[10] = 2872;
    gm->play->ear->mp->no_col[11] = 2868;
    gm->play->ear->mp->no_col[12] = 2902;
    gm->play->ear->mp->no_col[13] = 2908;
    gm->play->ear->mp->no_col[14] = 2893;
    gm->play->ear->mp->no_col[15] = 2887;
    gm->play->ear->mp->no_col[16] = 2885;
    gm->play->ear->mp->no_col[17] = 2897;
    gm->play->ear->mp->no_col[18] = 2887;
    gm->play->ear->mp->no_col[19] = 1556;
    gm->play->ear->mp->no_col[20] = 1604;
    gm->play->ear->mp->no_col[21] = 2882;
    gm->play->ear->mp->no_col[22] = 1616;
    gm->play->ear->mp->no_col[23] = 1608;
    gm->play->ear->mp->no_col[24] = 1609;
    gm->play->ear->mp->no_col[25] = 1614;
    gm->play->ear->mp->no_col[26] = 1622;
    gm->play->ear->mp->no_col[27] = 1612;
    gm->play->ear->mp->no_col[28] = 1613;
    gm->play->ear->mp->no_col[29] = 1615;
    gm->play->ear->mp->no_col[30] = 1620;
    gm->play->ear->mp->no_col[31] = 1621;
    gm->play->ear->mp->no_col[32] = 1623;
    gm->play->ear->mp->no_col[33] = 2093;
    gm->play->ear->mp->no_col[34] = 1560;
    gm->play->ear->mp->no_col[35] = 0021;
}