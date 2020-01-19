/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019 [WSL: Debian]
** File description:
** my_strcpy
*/

#include "include/my.h"

char *my_strcpy(char *dest, const char *src)
{
    return my_memcpy(dest, src, my_strlen(src) + 1);
}