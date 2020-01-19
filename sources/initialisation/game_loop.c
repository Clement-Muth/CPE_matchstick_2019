/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** game_loop
*/

#include "main/main.h"

_Bool check_map(main_t *match)
{
    int stick = 0;

    for (int n = 0; map[n]; ++n)
        for (int i = 1; map[n][i]; ++i)
            stick += (map[n][i] == '|') ? 1 : 0;
    return (stick == 1) ? (true) : (false);
}

void game_loop(main_t *match)
{
    display(match);
    while (game) {
        write(1, "\nYour turn:\n", 13);
        turn = true;
        player_turn(match);
        display(match);
        write(1, "\nAI's turn...\n", 15);
        turn = false;
        ia_turn(match);
        display(match);
        if (check_map(match) == true)
            break;
    }
    printf("%s", (turn == false) ? "\nYou lose...\n" : "\nYou win !!\n");
}