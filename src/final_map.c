/*
** EPITECH PROJECT, 2020
** BSQ_new
** File description:
** final_map
*/

#include "../include/bsq.h"

char **draw_square(char **map, char big, int x, int y)
{
    int square = big-48, i = 0, j = 0;

    for (; i != square; i++, y++) {
        for (j = x; j != x+square; j++) {
            map[y][j] = 'x';
        }
    }

    return (map);
}

int final_map(char **map, char big, int x, int y)
{
    int i = 0, j = 0, count = 0;

    for (; map[i] != NULL; i++) {
        for (j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == '0')
                map[i][j] = 'o';
            else if (map[i][j] == '\n')
                continue;
            else {
                map[i][j] = '.';
                count++;
            }
        }
    }
    if (count > 0)
        map = draw_square(map, big, x, y);
    for (i = 0; map[i] != NULL; i++)
        my_putstr(map[i]);
    free_map(map);
    return (0);
}