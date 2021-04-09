/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include "include/my_rpg.h"

void initialisation(game_t *gm)
{
    init_window(gm);
    init_play(gm);
}

void option_h(void)
{

}

int main(int ac, char **av)
{
    game_t *gm;

    if (ac < 1 || ac > 2)
        return (84);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        option_h();
    gm = struct_fill_game();
    initialisation(gm);
    while (sfRenderWindow_isOpen(gm->win->win)) {
            scene(gm);
            sfRenderWindow_display(gm->win->win);
    }
}