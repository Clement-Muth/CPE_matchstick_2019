/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** create_map
*/

#include "main/main.h"

static void my_malloc(main_t *match)
{
    map = my_memalloc(sizeof(char *) * line + 10);
    for (int i = 0; i != line; ++i)
        map[i] = my_memalloc(sizeof(char) * star);
}

static void fill_map(main_t *match, int i)
{
    for (int n = 0; n != star - 2; ++n)
        map[i][n] = ' ';
    map[i][star - 2] = '\0';
    map[i][line - 1] = '|';
    for (int n = 0; n != i; ++n)
        map[i][n + line] = '|';
    for (int n = 0; n != -i; --n)
        map[i][n + line - 2] = '|';
}

void create_map(main_t *match)
{
    int i = 0;

    my_malloc(match);
    for (i = 0; i != line; ++i)
        fill_map(match, i);
    map[i] = NULL;
}