/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** process
*/

#include "main/main.h"
#include <time.h>

#define _FILE "process.c"

static void process_play(main_t *match)
{
    for (int i = star - 2, stick = my_atoi(get_nbr); stick != 0 && i >= 0; --i)
        if (map[my_atoi(get_line) - 1][i] == '|') {
            map[my_atoi(get_line) - 1][i] = ' ';
            stick--;
        }
}

void ia_turn(main_t *match)
{
    time_t t;

    srand((unsigned) time(&t));
    while (1) {
        get_line = my_itos(rand() % my_atoi(av[1]) + 1);
        get_nbr = my_itos(rand() % my_atoi(av[2]) + 1);
        if (get_line > 0 && get_nbr > 0)
            break;
    }
    if (check_possibility(match) == false) {
        if (check_map(match) == false)
            return (ia_turn(match));
        return;
    }
    my_printf("AI removed %d match(es) from line %d\n", my_atoi(get_nbr),
    my_atoi(get_line));
    process_play(match);
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
    if (check_possibility(match) == false) {
        display(match);
        return (player_turn(match));
    }
    process_play(match);
    my_printf("Player removed %d match(es) from line %d\n", my_atoi(get_nbr),
    my_atoi(get_line));
}

void process(main_t *match)
{
    create_map(match);
    game_loop(match);
}