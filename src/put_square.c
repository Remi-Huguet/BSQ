/*
** EPITECH PROJECT, 2020
** put_square
** File description:
** put_square
*/
#include "../include/bsq.h"

void put_line(int size)
{
    int i = 0;

    while (i != size) {
        my_putchar('x');
        i = i + 1;
    }
}

void put_square(char *buffer, int rt, int size, int large)
{
    int i = start_square(buffer);
    int t = 0;

    while (buffer[i] != '\0' && \
            (buffer[i] == '.' || buffer[i] == 'o' || buffer[i] == '\n')) {
        if (i == rt && t != size) {
            put_line(size);
            t = t + 1;
            i = i + size - 1;
            rt = rt + large + 1;
        } else
            my_putchar(buffer[i]);
        i = i + 1;
    }
    my_putchar('\n');
}
