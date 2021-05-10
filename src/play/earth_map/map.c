/*
** EPITECH PROJECT, 2021
** map.c
** File description:
** map
*/

#include "../../include/my_rpg.h"

void mooving_on_map_ear(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyRight) {
        check_if_colision_right(gm);
        anime_player_right(gm);
        sfSprite_setTextureRect(gm->play->ear->player, gm->play->ear->r_player);
        moove_right_player(gm);
    } if (gm->ev->event.key.code == sfKeyLeft) {
        check_if_colision_left(gm);
        anime_player_left(gm);
        sfSprite_setTextureRect(gm->play->ear->player, gm->play->ear->r_player);
        moove_left_player(gm);
    } if (gm->ev->event.key.code == sfKeyUp) {
        check_if_colision_up(gm);
        anime_player_up(gm);
        sfSprite_setTextureRect(gm->play->ear->player, gm->play->ear->r_player);
        moove_up_player(gm);
    } if (gm->ev->event.key.code == sfKeyDown) {
        check_if_colision_down(gm);
        anime_player_down(gm);
        sfSprite_setTextureRect(gm->play->ear->player, gm->play->ear->r_player);
        moove_down_player(gm);
    }
    gm->play->ear->mp->obs = 1;
}

void new_map_visual(game_t *gm)
{
    gm->play->ear->time_m = sfClock_getElapsedTime(gm->play->ear->clock_m);
    gm->play->ear->second_m = gm->play->ear->time_m.microseconds /
    1000000.00;
    if (gm->play->ear->mp->m_press == 1 && gm->play->ear->second_m > 0.4) {
        gm->play->ear->mp->m_press = 0;
        sfClock_restart(gm->play->ear->clock_m);
    }
}

void use_map(game_t *gm, int i, int j, int p)
{
    init_stage_v(gm);
    if (gm->play->ear->mp->i == 0)
        use_map_1(gm, i, j, p);
    if (gm->play->ear->mp->i == 1)
        use_map_2(gm, i, j, p);
    if (gm->play->ear->mp->i == 2 || gm->play->ear->mp->i == 3)
        use_map_3(gm, i, j, p);
}

void set_map(game_t *gm)
{
    int k = 0;

    gm->play->ear->pos_map[gm->play->ear->mp->i][0].x = 324;
    gm->play->ear->pos_map[gm->play->ear->mp->i][0].y = 144;
    sfSprite_setPosition(gm->play->ear->map[gm->play->ear->mp->i][0],
    gm->play->ear->pos_map[gm->play->ear->mp->i][0]);
    for (int i = gm->play->ear->mp->y_1; i < gm->play->ear->mp->y_2; i++) {
        for (int j = gm->play->ear->mp->x_1; j < gm->play->ear->mp->x_2; j++) {
            use_map(gm, i, j, k);
            sfSprite_setScale(gm->play->ear->map[gm->play->ear->mp->i][k],
            (sfVector2f){2, 2});
            if (j == gm->play->ear->mp->x_1 && k != 0) {
                gm->play->ear->pos_map[gm->play->ear->mp->i][k].x = 324;
                gm->play->ear->pos_map[gm->play->ear->mp->i][k].y =
                gm->play->ear->pos_map[gm->play->ear->mp->i][k - 1].y
                + 48;
                sfSprite_setPosition(gm->play->ear->map[gm->play->ear->mp->i]
                [k], gm->play->ear->pos_map[gm->play->ear->mp->i][k]);
            } if (j != gm->play->ear->mp->x_1) {
                gm->play->ear->pos_map[gm->play->ear->mp->i][k].x =
                gm->play->ear->pos_map[gm->play->ear->mp->i][k - 1].x + 48;
                gm->play->ear->pos_map[gm->play->ear->mp->i][k].y =
                gm->play->ear->pos_map[gm->play->ear->mp->i][k - 1].y;
                sfSprite_setPosition(gm->play->ear->map[gm->play->ear->mp->i]
                [k], gm->play->ear->pos_map[gm->play->ear->mp->i][k]);
            }
            k++;
        }
    }
}