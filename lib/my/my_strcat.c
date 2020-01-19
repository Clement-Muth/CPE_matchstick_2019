/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strcat
*/

#include "include/my.h"

char *my_strcat(char *dest, const char *src)
{
    my_strcpy(dest + my_strlen(dest), src);
    return (dest);
}