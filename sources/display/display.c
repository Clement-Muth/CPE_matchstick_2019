/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** display
*/

#include "main/main.h"

static void display_star(int st)
{
    while (st--)
        my_printf("*");
    my_printf("\n");
}

void display(main_t *match)
{
    display_star(star);
    for (int i = 0; i < line; i++) {
        write(1, "*", 1);
        write(1, map[i], my_strlen(map[i]));
        write(1, "*\n", 2);
    }
    display_star(star);
    write(1, ((turn) ? "\nYour turn:\n" : "\nIA's turn:\n"), 13);
    if (turn)
        write(1, "Line: ", 7);
    else
        my_printf("AI removed 3 match(es) from line 2\n");
}