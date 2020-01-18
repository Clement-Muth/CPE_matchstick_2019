/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019 [WSL: Debian]
** File description:
** my_strcpy
*/

#include "include/my.h"

char *my_strcpy(char *dest, const char *src)
{
    int i = 0;
    dest = my_memalloc((my_strlen(src) + 2));

    for (i = 0; src[i]; ++i)
        dest[i] = src[i];
    dest[i + 1] = '\0';
    free((char *)src);
    return (dest);
}