/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** error_handling
*/

#include "main/main.h"

#define _FILE "error_handling.c"

void my_exit(main_t *match, char *__ERROR, int __LINE, char *__FILE)
{
    free(match);
    my_printf("[ ERROR ][ %s ][ l: %d ] %s\n", __FILE, __LINE, __ERROR);
    exit(EXIT_ERROR);
}

_Bool check_possibility(main_t *match)
{
    for (int i = 1; map[my_atoi(get_line) - 1][i]; ++i)
        if (map[my_atoi(get_line) - 1][i] == '|')
            return (true);
    if (turn == true)
        my_putstrc("\n/!\\ Any matches to take here\n", RED, true);
    return (false);
}

_Bool check_line(main_t *match)
{
    if (!is_strnum(get_line)) {
        my_putstrc("\n/!\\ Please enter a number\n", RED, true);
        return (false);
    }
    if (my_atoi(get_line) > my_atoi(av[1])) {
        my_putstrc("\n/!\\ The line must be lower than the limit\n", RED, true);
        return (false);
    }
    if (my_atoi(get_line) < 1) {
        my_putstrc("\n/!\\ The line can't be lower than 1\n", RED, true);
        return (false);
    }
    return (true);
}

_Bool check_nbr(main_t *match)
{
    if (!is_strnum(get_nbr)) {
        my_putstrc("\n/!\\ Please enter a number\n", RED, true);
        return (false);
    }
    if (my_atoi(get_nbr) > my_atoi(av[2])) {
        my_putstrc("\n/!\\ The number must be lower than the limit\n", RED, 1);
        return (false);
    }
    if (my_atoi(get_nbr) < 1) {
        my_putstrc("\n/!\\ The number can't be lower than 1\n", RED, true);
        return (false);
    }
    return (true);
}

void error_handling(main_t *match, int argc, char **argv)
{
    if (argc < 3)
        my_exit(match, "Too few argument", 19, _FILE);
    if (argc > 3)
        my_exit(match, "Too many argument", 21, _FILE);
    if (!is_strnum(argv[1]) || !is_strnum(argv[2]))
        my_exit(match, "Argument's must be a number", 24, _FILE);
    if (my_atoi(argv[1]) < 1)
        my_exit(match, "First number must be greater than 1 or equal", 25,
        _FILE);
    if (my_atoi(argv[1]) > 100)
        my_exit(match, "First number must be lower than 100 or equal", 27,
        _FILE);
    if (my_atoi(argv[2]) < 1)
        my_exit(match, "The maximum number of matches that can be taken out"\
        " each turn must be greater than 0", 29, _FILE);
}