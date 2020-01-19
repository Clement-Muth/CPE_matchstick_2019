/*
** EPITECH PROJECT, 2020
** CPE_matchstrick_2019
** File description:
** my_memcpy
*/

#include "include/my.h"

void *my_memcpy(void *dest, const void *src, size_t len)
{
    char *cdest = dest;
    const char *csrc = src;

    for (; len--; *cdest++ = *csrc++);
    return dest;
}