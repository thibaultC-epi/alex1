/*
** EPITECH PROJECT, 2021
** initialisation_play.c
** File description:
** initialisation_play
*/

#include "../include/my_rpg.h"

void init_inventory(game_t *gm)
{
    sfSprite_setTexture(gm->play->inv->inv, gm->play->inv->t_inv, sfTrue);
    sfSprite_setTexture(gm->play->stat->stats, gm->play->stat->t_stats, sfTrue);
    sfSprite_setPosition(gm->play->inv->inv, (sfVector2f){1300, 320});
    sfSprite_setPosition(gm->play->stat->stats, (sfVector2f){1550, 320});
}

char *open_obs_map(void)
{
    int fd = 0;
    char *buf = NULL;
    size_t count_size = 10099;

    fd = open("map5.txt", O_RDONLY);
    if (fd == -1)
        return (NULL);
    buf = malloc(sizeof(char) * 10100);
    if (read(fd, buf, count_size) == 84)
        return (NULL);
    buf[count_size - 1] = '\0';
    close(fd);
    return (buf);
}

void fill_obs_map(game_t *gm)
{
    char *buf = open_obs_map();
    int number = 0;
    int k = 0;
    int j = 0;

    gm->play->ear->mp->obs_map = malloc(sizeof(int *) * 100);
    for (int i = 0; i < 100; i++)
        gm->play->ear->mp->obs_map[i] = malloc(sizeof(int) * 100);
    for (int i = 0; buf[i] != '\0'; i++) {
        if (buf[i] == '\n') {
            k++;
            i++;
            j = 0;
        }
        number *= 10;
        number += buf[i] - '0';
        gm->play->ear->mp->obs_map[k][j] = number;
        j++;
        number = 0;
    }
}

void init_colision(game_t *gm)
{
    sfSprite_setTexture(gm->play->ear->player, gm->play->ear->t_player,
    sfTrue);
    sfSprite_setTexture(gm->play->border[0], gm->play->t_border[0], sfTrue);
    sfSprite_setTexture(gm->play->border[1], gm->play->t_border[0], sfTrue);
    sfSprite_setTexture(gm->play->border[2], gm->play->t_border[1], sfTrue);
    sfSprite_setTexture(gm->play->border[3], gm->play->t_border[1], sfTrue);
    sfSprite_setPosition(gm->play->ear->player, gm->play->ear->pos_player);
    sfSprite_setPosition(gm->play->border[0], (sfVector2f){0, 0});
    sfSprite_setPosition(gm->play->border[1], (sfVector2f){0, 927});
    sfSprite_setPosition(gm->play->border[2], (sfVector2f){0, 0});
    sfSprite_setPosition(gm->play->border[3], (sfVector2f){1600, 0});
    sfSprite_setTextureRect(gm->play->ear->player,
    gm->play->ear->r_player);
    fill_obs_map(gm);
}

void init_play(game_t *gm)
{
    init_inventory(gm);
    init_space_map(gm);
    init_collision(gm);
    init_load(gm);
    init_colision(gm);
}