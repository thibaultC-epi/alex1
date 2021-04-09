/*
** EPITECH PROJECT, 2021
** moove_ship.c
** File description:
** moove_ship
*/

#include "../../include/my_rpg.h"

void moove_ship(game_t *gm)
{
    if (gm->ev->event.key.code == sfKeyUp)
        gm->play->s_map->pos_ship.y -= 10;
    if (gm->ev->event.key.code == sfKeyRight)
        gm->play->s_map->pos_ship.x += 10;
    if (gm->ev->event.key.code == sfKeyDown)
        gm->play->s_map->pos_ship.y += 10;
    if (gm->ev->event.key.code == sfKeyLeft)
        gm->play->s_map->pos_ship.x -= 10;
}