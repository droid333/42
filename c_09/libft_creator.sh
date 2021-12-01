#!/bin/sh
gcc -c -Wall -Wextra -Werror ft*.c
ar rc libft.a *.o
rm *.o
ranlib libft.a
gcc main.c -L. -lft
./a.out
