/*
** EPITECH PROJECT, 2020
** BSQ_new
** File description:
** change_dot
*/

#include "../include/bsq.h"

int count_nb_char(char *str)
{
    int i = 0;

    for (; str[i] != '\n'; i++);
    return (i);
}

char check_char(char **map, int line, int i)
{
    char smallest = '0';

    if (map[line][i+1] == '0' || map[line+1][i+1] == '0'
    || map[line+1][i] == '0') {
        return (map[line][i]);
    }
    if (map[line][i+1] >= '1')
        smallest = map[line][i+1];
    if (map[line+1][i+1] >= '1')
        if (map[line+1][i+1] < smallest)
            smallest = map[line+1][i+1];
    if (map[line+1][i] >= '1')
        if (map[line+1][i] < smallest)
            smallest = map[line+1][i];

    smallest += (map[line][i]-48);
    return (smallest);
}

int change_dot(char **map, int line)
{
    int i = count_nb_char(map[0]), tmp = i-2, x = 0, y = 0;
    char big = '1';

    for (; line != -1 && i != 0; line--) {
        for (i = tmp; i != -1; i--) {
            if (map[line][i] != '0') {
                map[line][i] = check_char(map, line, i);
                if (big <= map[line][i]) {
                    big = map[line][i];
                    y = line;
                    x = i;
                }
            }
        }
    }
    return (final_map(map, big, x, y));
}