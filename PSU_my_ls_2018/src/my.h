/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/
#include <stdarg.h>
#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_put_nbr_octal(int nb);
int my_put_nbr_binary(int nb);
int my_put_nbr_hexa(int nb);
int my_put_nbr_hexa_carac(int nb);
void my_printf(char *str, ...);
int modulo(va_list arg , char *str , int i);
void flag_l(void);
int lsbase_3(char *str);
void lsbase_2(void);
void lsbase(char *str);
#endif
