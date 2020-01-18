/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** main
*/

#include "main/main.h"

int main(int argc, char **argv)
{
    main_t *match = my_memalloc(sizeof(main_t));

    error_handling(match, argc, argv);
    initialisation(match, argc, argv);
    process(match);
    free(match);
    return (EXIT_SUCCESS);
}