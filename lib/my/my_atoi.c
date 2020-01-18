/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** Convert a string to an integer
*/

#include "include/my.h"

int my_atoi(char *string)
{
    int sign = 1;
    unsigned int num = 0;

    do {
        if (*string == '-')
            sign *= -1;
        else if (*string >= '0' && *string <= '9')
            num = (num * 10) + (*string - '0');
        else if (num > 0)
            break;
    } while (*string++);
    return (num * sign);
}