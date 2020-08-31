/*
** EPITECH PROJECT, 2020
** my_sokoban_new
** File description:
** str_to_word_array
*/

#include "../include/bsq.h"

int count_line(char *buffer)
{
    int i = 0, line = 0;

    for (; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n')
            line++;
    }
    line++;
    return (line);
}

void count_char(char *buffer, int *index)
{
    for (; buffer[*index] != '\n' && buffer[*index] != '\0'; *index += 1);
    *index += 1;
}

void free_map(char **map)
{
    int i = 0;

    for (; map[i] != NULL; i++)
        free(map[i]);
    free(map);
}

char modif_to_number(char *buffer, int *index)
{
    if (buffer[*index] == 'o')
        return ('0');
    else if (buffer[*index] == '.')
        return ('1');
    return (buffer[*index]);
}

int str_to_word_array(char *buffer)
{
    int line = my_getnbr(buffer), i = 0, j = 0;
    int index = 0, tmp = 0, tmp_2 = 0;
    char **map = malloc(sizeof(char *) * (line+1));

    for (; buffer[index] != '\n'; index++);
    index++;

    for (; i != line; i++) {
        tmp = index, tmp_2 = index;
        count_char(buffer, &index);
        tmp = index-tmp;
        map[i] = malloc(sizeof(char) * (tmp+1));
        for (j = 0; j != tmp; j++, tmp_2++)
            map[i][j] = modif_to_number(buffer, &tmp_2);
        map[i][j] = '\0';
    }
    map[i] = NULL;
    free(buffer);
    return (change_dot(map, line-2));
}