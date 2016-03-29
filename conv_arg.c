#include "my_printf.h"
#define TYPE int
#include <wchar.h>

void accurate_d(int size, t_main *main)
{
 if(main->accurate > size)
    {
      while(size < main->accurate)
	{
	  main->print = ft_strjoin(main->print, "0");
	  size++;
	  main->size++;
	}
    }
}

void join_lld(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((long long int)main->elem));
  size = ft_strlen(ft_itoa((long long int)main->elem));
  number = ft_itoa((long long int)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((long long int)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_ld(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((long int)main->elem));
  size = ft_strlen(ft_itoa((long int)main->elem));
  number = ft_itoa((long int)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((long int)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_hd(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((short int)main->elem));
  size = ft_strlen(ft_itoa((short int)main->elem));
  number = ft_itoa((short int)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((short int)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_hhd(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((signed char)main->elem));
  size = ft_strlen(ft_itoa((signed char)main->elem));
  number = ft_itoa((signed char)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((signed char)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_jd(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((intmax_t)main->elem));
  size = ft_strlen(ft_itoa((intmax_t)main->elem));
  number = ft_itoa((intmax_t)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((intmax_t)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_zd(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((size_t)main->elem));
  size = ft_strlen(ft_itoa((size_t)main->elem));
  number = ft_itoa((size_t)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((size_t)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_d(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((int)main->elem));
  size = ft_strlen(ft_itoa((int)main->elem));
  number = ft_itoa((int)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((int)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_lu(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((unsigned long)main->elem));
  size = ft_strlen(ft_itoa((unsigned long)main->elem));
  number = ft_itoa((unsigned long)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((unsigned long)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_llu(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((unsigned long long)main->elem));
  size = ft_strlen(ft_itoa((unsigned long long)main->elem));
  number = ft_itoa((unsigned long long)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((unsigned long long)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_hu(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((unsigned short)main->elem));
  size = ft_strlen(ft_itoa((unsigned short)main->elem));
  number = ft_itoa((unsigned short)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((unsigned short)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_hhu(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((unsigned char)main->elem));
  size = ft_strlen(ft_itoa((unsigned char)main->elem));
  number = ft_itoa((unsigned char)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((unsigned char)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_ju(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((uintmax_t)main->elem));
  size = ft_strlen(ft_itoa((uintmax_t)main->elem));
  number = ft_itoa((uintmax_t)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((uintmax_t)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_zu(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((size_t)main->elem));
  size = ft_strlen(ft_itoa((size_t)main->elem));
  number = ft_itoa((size_t)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((size_t)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}

void join_u(t_main *main)
{
  char *number;
  int size;

  if(main->accurate == -1)
    main->accurate = ft_strlen(ft_itoa((unsigned int)main->elem));
  size = ft_strlen(ft_itoa((unsigned int)main->elem));
  number = ft_itoa((unsigned int)main->elem);
  if(main->accurate > size)
    number = ft_strsub(number, 0, main->accurate);
  main->size += ft_strlen(ft_itoa((unsigned int)main->elem));
  accurate_d(size, main);
  main->print = ft_strjoin(main->print, &number[0]);
}
// SDU
//http://personal.ee.surrey.ac.uk/Personal/R.Bowden/C/printf.html
int manage_arg(t_main *main)
{
  main->i++;
  if(main->chaine[main->i] == 'd' || main->chaine[main->i] == 'i')
    {
      if(main->type == 0)
	join_d(main);
      else  if(main->type == 1)
	join_ld(main);
      else  if(main->type == 2)
	join_lld(main);
      else if(main->type == 3)
	join_hd(main);
      else if(main->type == 4)
	join_hhd(main);
      else if(main->type == 5)
	join_jd(main);
      else if(main->type == 6)
	join_zd(main);
      if(main->plusetat == 1 && main->zeroetat == 0)
	main->print = ft_strjoin("+", main->print);
    }
    else if(main->chaine[main->i] == 'o')
    {
      if(main->dietat == 1)
	{
	  main->print = ft_strjoin(main->print, "0");
	  main->size++;
	}
      base_converter(main, (unsigned long long int)main->elem, 8);
    }
  else if(main->chaine[main->i] == 'u')
    {
      if(main->type == 0)
        join_u(main);
        else  if(main->type == 1)
        join_lu(main);
      else  if(main->type == 2)
        join_llu(main);
      else if(main->type == 3)
        join_hu(main);
      else if(main->type == 4)
        join_hhu(main);
      else if(main->type == 5)
        join_ju(main);
      else if(main->type == 6)
	join_zu(main);
    }
  else if(main->chaine[main->i] == 's')
    {
      if(main->accurate == -1)
	main->accurate = ft_strlen((char *)main->elem);
      int i;
      char *lp;
      
      lp = (char *)main->elem;
      lp = ft_strsub(lp, 0, main->accurate);
      i = 0;
      main->print = ft_strjoin(main->print, &lp[0]);
      if((size_t)main->accurate > ft_strlen(lp))
	main->size = ft_strlen(lp);
      else
	main->size += main->accurate;
    }
  else if(main->chaine[main->i] == 'S')
    {
      //L'un est sur un octet, l'autre sur 2. Si tu dois manipuler des chaines unicode, wchart_t est là pour ça.

    }
  else if(main->chaine[main->i] == 'c')
    {
      main->size++;
      main->print = ft_strjoin_carac(main->print, (int)main->elem);
    }
  else if(main->chaine[main->i] == 'C')
    {
      main->size++;
      main->print = ft_strjoin_carac(main->print, (wint_t)main->elem);
    }
  else if(main->chaine[main->i] == '%')
    {
      main->sizeword++;
      main->print = ft_strjoin_carac(main->print, '%');
    }
  else if(main->chaine[main->i] == 'p')
    {
      main->size += 2;
      main->print = ft_strjoin(main->print, "0x");
      base_converter(main, (unsigned long long int)main->elem, 16);
    }
  else if(main->chaine[main->i] == 'x')
    {
      if(main->dietat == 1)
	{
	  main->print = ft_strjoin(main->print, "0x");
	  main->size += 2;
	}
	base_converter(main, (unsigned long long int)main->elem, 16);
    }
  else if(main->chaine[main->i] == 'X')
    {
      if(main->dietat == 1)
	{
          main->print = ft_strjoin(main->print,"0X");
	  main->size += 2;        
	}
      base_converter_upper(main, (unsigned long long int)main->elem, 16);
    }
  else
    main->i--;
  return (1);
}
