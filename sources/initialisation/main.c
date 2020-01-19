/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** main
*/

#include "main/main.h"

static void my_free(main_t *match)
{
    for (int i = 0; i != line; ++i)
        free(map[i]);
    free(map);
    free(match);
}

int main(int argc, char **argv)
{
    main_t *match = my_memalloc(sizeof(main_t));

    error_handling(match, argc, argv);
    initialisation(match, argc, argv);
    process(match);
    my_free(match);
    return (turn == true) ? (true) : (2);
}