/*
** EPITECH PROJECT, 2021
** my_rpg.h
** File description:
** my_rpg
*/

#ifndef MY_RPG_H_
#define MY_RPG_H_

#include "include.h"

void interface(game_t *gm);
void init_window(game_t *gm);
void inventory(game_t *gm);
void init_inventory(game_t *gm);
void init_window(game_t *gm);
void init_play(game_t *gm);
void play(game_t *gm);
void scene(game_t *gm);
void init_space_map(game_t *gm);
void space_map(game_t *gm);
void init_pos_ship(game_t *gm);
void set_direction_ship(game_t *gm);
void moove_ship(game_t *gm);
void moove_map(game_t *gm);
void up_moove_map(game_t *gm);
void down_moove_map(game_t *gm);
void right_moove_map(game_t *gm);
void left_moove_map(game_t *gm);
void moove_up_ship(game_t *gm);
void moove_down_ship(game_t *gm);
void moove_right_ship(game_t *gm);
void moove_left_ship(game_t *gm);

inventory_t *struct_fill_inventory(void);
game_t *struct_fill_game(void);
window_t *struct_fill_window(void);
play_t *struct_fill_play(void);
space_map_t *struct_fill_space_map(void);

#endif /* !MY_RPG_H_ */
