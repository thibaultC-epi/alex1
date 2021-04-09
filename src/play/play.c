/*
** EPITECH PROJECT, 2021
** play.c
** File description:
** play
*/

#include "../include/my_rpg.h"

void event_play(game_t *gm)
{
    int i = 0;

    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        if (gm->ev->event.type == sfEvtKeyPressed &&
        gm->ev->event.key.code == sfKeyP) {
            if (gm->play->inv->press == 0) {
                gm->play->inv->press = 1;
                i = 1;
            } if (gm->play->inv->press == 1 && i == 0)
                gm->play->inv->press = 0;
        }
    }
}

void draw_sprite_play(game_t *gm)
{
    sfRenderWindow_drawSprite(gm->win->win, gm->play->back, NULL);
}

void play(game_t *gm)
{
    if (gm->play->scene_play == 0) {
        event_play(gm);
    }
    draw_sprite_play(gm);
    if (gm->play->scene_play == 1) {
        interface(gm);
        space_map(gm);
    }
}