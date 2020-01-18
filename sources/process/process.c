/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** process
*/

#include "main/main.h"

char *get_next_line(const int fd)
{
    int i = 0;
    int size = 0;
    static char buffer[1];
    char *str = my_memalloc(1);

    str[0] = '\0';
    for (i = 0; (size = read(fd, buffer, 1)) > 0 && buffer[0] != '\n'; ++i) {
        str = my_strcpy(str, str);
        str[i] = buffer[0];
    }
    return ((size == 0 && i == 0) || str[0] == '\n') ? (NULL) : (str);
}

void player_turn(main_t *match)
{
    write(1, "Line: ", 7);
    if ((get_line = get_next_line(0)) == NULL)
        return (player_turn(match));
}

void process(main_t *match)
{
    create_map(match);
}