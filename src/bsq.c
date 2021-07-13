/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** BSQ
*/
#include "../include/bsq.h"

int set_square(char *buffer)
{
    int large = large_size(buffer);
    int size = 0;
    int rt = find_square(buffer, large, &size);

    put_square(buffer, rt, size, large);
    return (0);
}

int get_file(char *filename)
{
    struct stat fichier;
    stat(filename, &fichier);
    int len = fichier.st_size;
    int fd = open(filename, O_RDONLY);

    if (fd == -1)
        return (84);
    if (len > 1001025)
        return (0);
    char buffer[len];
    int size = len - 1;

    read(fd, &buffer, size);
    close(fd);
    set_square(buffer);
    return (0);
}
