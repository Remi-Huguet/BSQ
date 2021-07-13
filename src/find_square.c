/*
** EPITECH PROJECT, 2020
** find_square.c
** File description:
** find_square.c
*/
#include "../include/bsq.h"

int check_square(char *buffer, int *cplarge, int large, int i)
{
    int count = 0;
    int t = i;
    int x = 0;

    while (buffer[i] == '.' && count != *cplarge) {
        if (buffer[i] != '.')
            return (-1);
        if (x == *cplarge - 1) {
            count = count + 1;
            i = i + large + 1 - *cplarge + 1;
            x = 0;
        } else {
            i = i + 1;
            x = x + 1;
        }
        if (count == *cplarge)
            return (t);
    }
    return (-1);
}

int max_square(char *buffer, int cplarge, int *resize, int large)
{
    int i = start_square(buffer);
    int rt = -1;
    int cprlarge = cplarge;

    while (buffer[i] != '\0') {
        rt = check_square(buffer, &cprlarge, large, i);
        if (rt != -1) {
            *resize = cplarge;
            return (rt);
        }
        i = i + 1;
    }
    return (-1);
}

int find_square(char *buffer, int large, int *size)
{
    int resize = 0;
    int cplarge = large;
    int rt = -1;

    while (cplarge != 0) {
        rt = max_square(buffer, cplarge, &resize, large);
        if (rt != -1) {
            *size = resize;
            return (rt);
        }
        cplarge = cplarge - 1;
    }
    large = cplarge;
    return (0);
}
