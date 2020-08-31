/*
** EPITECH PROJECT, 2020
** BSQ_new
** File description:
** bsq
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdlib.h>

//lib
int my_puterror(char *str);
int my_getnbr(char *src);
void my_putstr(char *str);

//src
int open_file(char *filepath);
int str_to_word_array(char *buffer);
int change_dot(char **map, int line);
int final_map(char **map, char big, int x, int y);
void free_map(char **map);

#endif /* !BSQ_H_ */
