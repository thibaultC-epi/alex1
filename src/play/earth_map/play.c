/*
** EPITECH PROJECT, 2021
** play.c
** File description:
** play
*/

#include "../../include/my_rpg.h"

void event_play_ear(game_t *gm)
{
    int i = 0;

    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        if (gm->ev->event.type == sfEvtKeyPressed)
            if (gm->play->ear->mp->m_press == 0 &&
            gm->echap->i == 0)
                mooving_on_map_ear(gm);
        if (gm->ev->event.type == sfEvtKeyPressed &&
        gm->ev->event.key.code == sfKeyP) {
            if (gm->play->inv->press == 0) {
                gm->play->inv->press = 1;
                i = 1;
            } if (gm->play->inv->press == 1 && i == 0)
                gm->play->inv->press = 0;
        } if (gm->ev->event.type == sfEvtKeyPressed &&
        gm->ev->event.key.code == sfKeyEscape) {
            if (gm->echap->i == 0) {
                gm->echap->i = 1;
                i = 1;
            } if (gm->echap->i == 1 && i == 0)
                gm->echap->i = 0;
        }
    }
}

void draw_sprite_ear(game_t *gm)
{
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 459; i++) {
            sfRenderWindow_drawSprite(gm->win->win, gm->play->ear->map[j][i],
            NULL);
        }
    }
    sfRenderWindow_drawSprite(gm->win->win, gm->play->border[0], NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->play->border[1], NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->play->border[2], NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->play->border[3], NULL);
    sfRenderWindow_drawSprite(gm->win->win, gm->play->ear->player, NULL);
}

char *open_map(game_t *gm)
{
    int fd = 0;
    char *buf = NULL;
    size_t count_size = 40100;

    if (gm->play->ear->mp->i == 0)
        fd = open("map1.txt", O_RDONLY);
    if (gm->play->ear->mp->i == 1)
        fd = open("map2.txt", O_RDONLY);
    if (gm->play->ear->mp->i == 2)
        fd = open("map3.txt", O_RDONLY);
    if (gm->play->ear->mp->i == 3)
        fd = open("map4.txt", O_RDONLY);
    if (fd == -1)
        return (NULL);
    buf = malloc(sizeof(char) * 40101);
    if (read(fd, buf, count_size) == 84)
        return (NULL);
    buf[count_size - 1] = '\0';
    close(fd);
    return (buf);
}

void fill_tab_map(game_t *gm)
{
    char *buf = open_map(gm);
    int count = 0;
    int number = 0;
    int k = 0;
    int j = 0;

    gm->play->ear->mp->tab_map = malloc(sizeof(int *) * 100);
    for (int i = 0; i < 100; i++)
        gm->play->ear->mp->tab_map[i] = malloc(sizeof(int) * 100);
    for (int i = 0; buf[i] != '\0'; i++) {
        if (count == 4) {
            gm->play->ear->mp->tab_map[k][j] = number;
            j++;
            count = 0;
            number = 0;
        } if (count != 4 && buf[i] != '\n') {
            number *= 10;
            number += buf[i] - '0';
            count++;
        } if (buf[i] == '\n') {
            k++;
            j = 0;
        }
    }
    gm->play->ear->mp->tab_map[k][j] = number;
    if (gm->play->ear->mp->i == -1) {
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
            }
        }
    }
}

void play_ear(game_t *gm)
{
    new_map_visual(gm);
    sfSprite_setPosition(gm->play->inv->inv, (sfVector2f){1175, 320});
    sfSprite_setPosition(gm->play->stat->stats, (sfVector2f){1425, 320});
    sfSprite_setScale(gm->play->inv->inv, (sfVector2f){0.8, 0.8});
    sfSprite_setScale(gm->play->stat->stats, (sfVector2f){0.8, 0.8});
    event_play_ear(gm);
    while (gm->play->ear->mp->i < 4) {
        fill_tab_map(gm);
        creation_sprite(gm);
        set_map(gm);
        if (gm->play->ear->mp->i == 0) {
            for (int i = 0; i < 202; i++) {
                free(gm->play->ear->mp->rect_v[i]);
            }
            free(gm->play->ear->mp->text_v);
            free(gm->play->ear->mp->stage);
            free(gm->play->ear->mp->rect_v);
        } if (gm->play->ear->mp->i == 1) {
            for (int i = 0; i < 123; i++) {
                free(gm->play->ear->mp->rect_v[i]);
            }
            free(gm->play->ear->mp->text_v);
            free(gm->play->ear->mp->stage);
            free(gm->play->ear->mp->rect_v);
        } if (gm->play->ear->mp->i == 2 || gm->play->ear->mp->i == 3) {
            for (int i = 0; i < 191; i++) {
                free(gm->play->ear->mp->rect_v[i]);
            }
            free(gm->play->ear->mp->text_v);
            free(gm->play->ear->mp->stage);
            free(gm->play->ear->mp->rect_v);
        }
        gm->play->ear->mp->i++;
    }
    draw_sprite_ear(gm);
    interface(gm);
    if (gm->echap->i == 1) {
        echap_p(gm);
    }
}