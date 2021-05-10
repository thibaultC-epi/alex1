/*
** EPITECH PROJECT, 2021
** map2.c
** File description:
** map2
*/

#include "../../include/my_rpg.h"

void use_map_1(game_t *gm, int i, int j, int p)
{
    for (int k = 0; k < 202; k++) {
        if (gm->play->ear->mp->tab_map[i][j] == gm->play->ear->mp->stage[k]) {
            sfSprite_setTexture(gm->play->ear->map[gm->play->ear->mp->i][p],
            gm->play->ear->t_map[gm->play->ear->mp->text_v[k]], sfTrue);
            gm->play->ear->r_map[gm->play->ear->mp->i][p].left =
            gm->play->ear->mp->rect_v[k][0];
            gm->play->ear->r_map[gm->play->ear->mp->i][p].top =
            gm->play->ear->mp->rect_v[k][1];
            sfSprite_setTextureRect(gm->play->ear->map[gm->play->ear->mp->i][p],
            gm->play->ear->r_map[gm->play->ear->mp->i][p]);
        }
    }
}

void use_map_2(game_t *gm, int i, int j, int p)
{
    for (int k = 0; k < 124; k++) {
        if (gm->play->ear->mp->tab_map[i][j] == gm->play->ear->mp->stage[k]) {
            sfSprite_setTexture(gm->play->ear->map[gm->play->ear->mp->i][p],
            gm->play->ear->t_map[gm->play->ear->mp->text_v[k]], sfTrue);
            gm->play->ear->r_map[gm->play->ear->mp->i][p].left =
            gm->play->ear->mp->rect_v[k][0];
            gm->play->ear->r_map[gm->play->ear->mp->i][p].top =
            gm->play->ear->mp->rect_v[k][1];
            sfSprite_setTextureRect(gm->play->ear->map[gm->play->ear->mp->i][p],
            gm->play->ear->r_map[gm->play->ear->mp->i][p]);
        }
    }
}

void use_map_3(game_t *gm, int i, int j, int p)
{
    for (int k = 0; k < 191; k++) {
        if (gm->play->ear->mp->tab_map[i][j] == gm->play->ear->mp->stage[k]) {
            sfSprite_setTexture(gm->play->ear->map[gm->play->ear->mp->i][p],
            gm->play->ear->t_map[gm->play->ear->mp->text_v[k]], sfTrue);
            gm->play->ear->r_map[gm->play->ear->mp->i][p].left =
            gm->play->ear->mp->rect_v[k][0];
            gm->play->ear->r_map[gm->play->ear->mp->i][p].top =
            gm->play->ear->mp->rect_v[k][1];
            sfSprite_setTextureRect(gm->play->ear->map[gm->play->ear->mp->i][p],
            gm->play->ear->r_map[gm->play->ear->mp->i][p]);
        }
    }
}