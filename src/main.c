/*
** EPITECH PROJECT, 2020
** BSQ_new
** File description:
** main
*/

#include "../include/bsq.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (my_puterror("Invalid arg\n"));
    else
        open_file(argv[1]);
    return (0);
}