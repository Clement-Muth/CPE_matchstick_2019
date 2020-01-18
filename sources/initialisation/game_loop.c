/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** game_loop
*/

#include "main/main.h"

void game_loop(main_t *match)
{
    display(match);
    while (game) {
        write(1, "\nYour turn:\n", 13);
        player_turn(match);
        display(match);
    }
}