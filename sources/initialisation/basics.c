/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** basics
*/

#include "main/main.h"

void initialisation(main_t *match, int argc, char **argv)
{
    ac = argc;
    av = argv;
    turn = true;
    game = true;
    get_line = my_memalloc(10);
    get_nbr = my_memalloc(10);
}