/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** function
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_


void initialisation(main_t *match, int argc, char **argv);

void error_handling(main_t *match, int argc, char **argv);

void process(main_t *match);

void display(main_t *match);

void create_map(main_t *match);

void game_loop(main_t *match);

void player_turn(main_t *match);

#endif /* !FUNCTION_H_ */