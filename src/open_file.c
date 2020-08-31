/*
** EPITECH PROJECT, 2020
** BSQ_new
** File description:
** open_file
*/

#include "../include/bsq.h"

int open_file(char *filepath)
{
    int fs = 0, size = 0;
    fs = open(filepath, O_RDONLY);
    if (fs == -1)
        return (my_puterror("Can't open file\n"));
    struct stat buff;
    stat(filepath, &buff);
    size = buff.st_size;
    char *buffer = malloc(sizeof(char) * (size+1));
    if (buffer == NULL)
        return (my_puterror("Buffer malloc NULL\n"));
    read(fs, buffer, size);
    buffer[size] = '\0';
    close(fs);
    return (str_to_word_array(buffer));
}