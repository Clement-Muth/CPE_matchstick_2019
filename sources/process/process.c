/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** process
*/

#include "main/main.h"

#define _FILE "process.c"

static void process_play(main_t *match)
{
    int stick = my_atoi(get_nbr);
    int branch = my_atoi(get_line);

    for (int i = star - 2; stick != 0 && i >= 0; --i)
        if (map[branch - 1][i] == '|') {
            map[branch - 1][i] = ' ';
            stick--;
        }
}

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
    check_possibility(match);
    process_play(match);
    my_printf("Player remove %d match(es) from line %d\n", my_atoi(get_nbr),
    my_atoi(get_line));
}

void process(main_t *match)
{
    create_map(match);
    game_loop(match);
}