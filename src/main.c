/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/
#include "../include/bsq.h"

int main(int argv, char **argc)
{
    if (argv > 2)
        return (0);
    if (!argc[1])
        return (0);
    get_file(argc[1]);
    return (0);
}
