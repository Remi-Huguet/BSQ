/*
** EPITECH PROJECT, 2020
** fct.c
** File description:
** fct.c
*/
#include "../include/bsq.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int large_size(char *buffer)
{
    int i = 0;
    int x = 0;

    while (buffer[i] != '\n' && buffer[i] != '\0')
        i = i + 1;
    i = i + 1;
    while (buffer[i] != '\n' && buffer[i] != '\0') {
        x = x + 1;
        i = i + 1;
    }
    return (x);
}

int start_square(char *buffer)
{
    int i = 0;

    while (buffer[i] != '.' && buffer[i] != 'o')
        i = i + 1;
    return (i);
}
