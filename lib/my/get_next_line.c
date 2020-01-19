/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** get_next_line
*/

#include "include/my.h"

static void my_exit(void)
{
    my_putstr("[ ERROR ][ get_next_line ][ l: 0 ] Echec get_next_line\n");
    exit(EXIT_ERROR);
}

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
    if ((size == 0 && i == 0) || str[0] == '\n')
        my_exit();
    return (str);
}