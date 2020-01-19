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

void my_exit(main_t *match, char *__ERROR, int __LINE, char *__FILE);

_Bool check_nbr(main_t *match);

_Bool check_line(main_t *match);

_Bool check_possibility(main_t *match);

void ia_turn(main_t *match);

_Bool check_map(main_t *match);

#endif /* !FUNCTION_H_ */