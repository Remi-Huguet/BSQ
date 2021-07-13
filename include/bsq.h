/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
void my_putchar(char c);
int large_size(char *buffer);
int check_square(char *buffer, int *cplarge, int large, int i);
int start_square(char *buffer);
int max_square(char *buffer, int cplarge, int *resize, int large);
int find_square(char *buffer, int large, int *size);
void put_line(int size);
void put_square(char *buffer, int rt, int size, int large);
int set_square(char *buffer);
int get_file(char *filename);
