/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strdup
*/

#include "include/my.h"

char *my_strdup(char *src)
{
    size_t len = my_strlen(src) + 1;
    void *new = my_memalloc(len);

    return ((char *)my_memcpy(new, src, len));
}