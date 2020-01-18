/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** error_handling
*/

#include "main/main.h"

#define _FILE "error_handling.c"

static void my_exit(main_t *match, char *__ERROR, int __LINE, char *__FILE)
{
    free(match);
    write(2, __ERROR_MSG, my_strlen(__ERROR_MSG));
    exit(EXIT_ERROR);
}

void error_handling(main_t *match, int argc, char **argv)
{
    if (argc < 3)
        my_exit(match, "Too few argument\n", 19, "");
    if (argc > 3)
        my_exit(match, "Too many argument\n", 21, _FILE);
    if (!is_strnum(argv[1]) || !is_strnum(argv[2]))
        my_exit(match, "Argument's must be a number\n", 24, _FILE);
    if (my_atoi(argv[1]) < 1)
        my_exit(match, "First number must be greater than 1 or equal\n", 25,
        _FILE);
    if (my_atoi(argv[1]) > 100)
        my_exit(match, "First number must be lower than 100 or equal\n", 27,
        _FILE);
    if (my_atoi(argv[2]) < 1)
        my_exit(match, "The maximum number of matches that can be taken out"\
        " each turn must be greater than 0\n", 29, _FILE);
}