/*
** EPITECH PROJECT, 2021
** struct_map_fill.c
** File description:
** struct_map_fill
*/

#include "../../../include/my_rpg.h"

map_t *struct_fill_map(void)
{
    map_t *mp = malloc(sizeof(map_t));
    mp->i = 0;
    mp->x_1 = 0;
    mp->x_2 = 27;
    mp->y_1 = 65;
    mp->y_2 = 82;
    mp->m_press = 0;
    mp->x_p = 12;
    mp->y_p = 73;
    mp->obs = 1;
    return (mp);
}