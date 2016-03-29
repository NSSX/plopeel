#ifndef MY_PRINTF_H
#define MY_PRINTF_H
#include <stdio.h>
#include <stdlib.h>
#include "libft/includes/libft.h"
#include <stdarg.h>

typedef struct s_main
{
  int i;
  const char *chaine;
  int nb;
  int taille;
  void *elem;
  int pointetat;
  int type;
  int etat;
  int dietat;
  int plusetat;
  int accurate;
  int width;
  int moinetat;
  int zeroetat;
  int mini;
  char *print;
  int size;
  int sizeword;
  int totalsize;
}t_main;

char    *ft_strjoin_carac(char const *s1, char s2);
int manage_arg(t_main *main);
int base_converter(t_main *main, unsigned long long int convert, int basee);
int base_converter_upper(t_main *main, unsigned long long int convert, int basee);
int ft_printf(const char *format, ...);
int add_mini(t_main *main);
int my_width(t_main *main, va_list *myva);
int flag_fiel(t_main *main);
int my_accurate(t_main *main, va_list *myva);
int lenght_fiel(t_main *main);
#endif
