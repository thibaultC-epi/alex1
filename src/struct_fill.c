/*
** EPITECH PROJECT, 2021
** struct_fill.c
** File description:
** struct_fill
*/

#include "include/my_rpg.h"

play_t *struct_fill_play(void)
{
    play_t *play = malloc(sizeof(play_t));
    play->back = sfSprite_create();
    play->t_back = sfTexture_createFromFile("image/back.jpg", NULL);
    play->inv = struct_fill_inventory();
    play->s_map = struct_fill_space_map();
    play->scene_play = 1;
    return (play);
}

window_t *struct_fill_window(void)
{
    window_t *win = malloc(sizeof(window_t));
    win->video_mode.width = 1920;
    win->video_mode.height = 1080;
    win->video_mode.bitsPerPixel = 32;
    return (win);
}

game_t *struct_fill_game(void)
{
    game_t *gm = malloc(sizeof(game_t));
    gm->scene = 1;
    gm->win = struct_fill_window();
    gm->ev = malloc(sizeof(event_t));
    gm->play = struct_fill_play();
    return (gm);
}