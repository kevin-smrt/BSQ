/*
** EPITECH PROJECT, 2020
** my_sokoban_new
** File description:
** my_puterror
*/

#include "../include/bsq.h"

int my_puterror(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(2, &str[i], 1);
        i++;
    }
    return (84);
}