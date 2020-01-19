/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** process
*/

#include "main/main.h"

#define _FILE "process.c"

void player_turn(main_t *match)
{
    write(1, "Line: ", 7);
    get_line = get_next_line(0);
    if (!check_line(match))
        return;
    write(1, "Matches: ", 10);
    get_nbr = get_next_line(0);
    if (!check_nbr(match))
        return;
    my_printf("Player remove %d match(es) from line %d\n", my_atoi(get_nbr),
    my_atoi(get_line));
}

void process(main_t *match)
{
    create_map(match);
}