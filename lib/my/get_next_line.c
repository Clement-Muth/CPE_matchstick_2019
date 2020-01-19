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

static char *my_malloc(char *str)
{
    int i = 0;
    char *str2 = my_memalloc((my_strlen(str) + 2));

    for (i = 0; str[i]; ++i)
        str2[i] = str[i];
    str2[i + 1] = '\0';
    free(str);
    return (str2);
}

char *get_next_line(const int fd)
{
    int size = 0;
    static char buffer[1];
    char *str = my_memalloc(1);

    str[0] = '\0';
    for (int i = 0; (size = read(fd, buffer, 1)) > 0 && buffer[0] != '\n';
    ++i) {
        str = my_malloc(str);
        str[i] = buffer[0];
    }
    return (str);
}