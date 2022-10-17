/*------------------------------*/
/*----------aff a---------------*/
/*------------------------------*/

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char ft_aff_a(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
			ft_putchar('\n');
			return(*str);
			break ;
		}
		i++;
	}
	ft_putchar('\n');
	return(*str);
}
int	main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_aff_a(av[1]);
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
/*----------------------------------*/
/*---------aff_first_param---------*/
/*---------------------------------*/

/*Assignment name  : aff_first_param
Expected files   : aff_first_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$*/

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c , 1);
}
char ft_first_param(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return(*str);
}

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		ft_first_param(av[1]);
	}
	ft_putchar('\n');
	return(0);
}

/*aff_last_param*/


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c , 1);
}
char ft_first_param(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return(*str);
}

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		ft_first_param(av[ac -1]);
	}
	ft_putchar('\n');
	return(0);
}

/*aff_z*/
/*
Assignment name  : aff_z
Expected files   : aff_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.

Example:

$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
z$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$*/

void ft_putchar(char c)
{
	write(1, &c, 1)
}
int main()
{
	ft_putchar('z');
	ft_putchar('\n');
	return(0);
}

/*maff_alpha*/
/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

/*maff_revalpha*/

/*Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

/*only_z*/
/*
Assignment name  : only_z
Expected files   : only_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a 'z' character on the standard output.
*/

/*strlen.sh*/

/*
Assignment name  : strlen_sh
Expected files   : strlen.sh
Allowed functions: 
--------------------------------------------------------------------------------

Write a shell script that displays the length of the string contained in the
environment variable FT_LINE, followed by a \n.

Example:

$> echo $FT_LINE
Les stagiaires du staff ne sentent pas toujours tres bon.
$> zsh strlen.sh
57
$>
*/
#!/bin/sh
# zsh strlen.sh
string = (echo $FT_LINE)

if [ "$string" ];then
	echo -n $FT_LINE | wc -m 
fi

	



/*LEVEL 1*/

/*First Word*/

/*
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int ac, char **av)
{
	int i;
	
	if (ac == 2)
	{
		
		while(av[1][i] == 32 || av[1][i] == '\t')
		{
		 	i++;
		}
		while(((av[1][i] != 32 || av[1][i] != '\t') && (av[1][i] != '\0')))
		{
			ft_putchar(av[1][i]);
			i++;
		}		 
	}
	ft_putchar('\n');
	return(0);
}
/*ft_countdown*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	c;

	c = '9';
	while (c >= '0')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');
	return (0);
}

/*ft_print_numbers*/

Assignment name  : ft_print_numbers
Expected files   : ft_print_numbers.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays all digits in ascending order.

Your function must be declared as follows:

void	ft_print_numbers(void);
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}


/*ft_putstr*/
/*
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
*/

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]));
		i++;
	}
}

/*ft_strcpy*/
/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
*/
char *ft_strcpy(char *s1, char *s2)
{
	int 	i;
	
	i = 0;
	while(s2 != '\0')
	{
		s1[i] = s2[i];
		i++
	}
	s1[i] = '\0';
	return(s1);
}

/*ft_strlen*/

int ft_strlen(char *s)
{
	int c;
	
	c = 0;
	while(s[c] != '\0')
	{ 
	 c++;
	}
	return(c);
}


/*ft_swap*/

void	ft_swap(int *a, int*b)
{
	int swap;
	
	swap = *a;
	*a = *b;
	*b = swap;
}


/*hello*/
/*
Assignment name  : hello
Expected files   : hello.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays "Hello World!" followed by a \n.

Example:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>*/
#include <unistd.h>

int	main(void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}

/*repeat_alpha*/
/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/
#include <unistd.h>

int 	main(int ac, char*av[])
{
	// criar dois contadores
	int i;
	int letter;
	
	i = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{	
			if (av[1][i] >= 'A' && 'Z' >= av[1][i])
			{
				// assim vamos buscar as repeticoes necessarias a fazer. 
				letter = av[1][i] - 63
				// penso que deveriamos por aqui o while 
				while (letter--)
					write(1, &av[1][i], 1);
			}
			else if (av[1][i] >= 'a' && 'z' >= av [1][i])
			{
				letter = av[1][i] - 95;
				while (letter--)
				{
					write(1, &av[1][i], 1);
				}
			}
			else
			{
				write (1, &av[1][i], 1);
			}
			i++;
		}
		
	}
	write(1, "\n",1)
	return(0);
}

/*rev_print*/
#include <unistd.h>

int main(int ac, char **av)
{
	int x; 
	
	if (ac == 2)
	{
		while (av[1][x] !='\0')
		{	
			x++;
		}
		x--;
		while (x >= 0)
		{
			write(1, &av[1][x], 1);
			x--;	
		}
	}
	write(1, "\n", 1);
	return (0);
} 


/*rot_13*/

/*rotone*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while (*s)
	{
		if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
			ft_putchar(*s + 1);
		else if (*s == 'Z' || *s == 'z')
			ft_putchar(*s - 25);
		else
			ft_putchar(*s);
		++s;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}

/*search_and_replace*/

/*ulstr*/

/*---------LEVEL 2----------*/

/* alpha_mirror */

/* do_op */

/* ft_atoi */

/* ft_strcmp */

/* ft_strdup */

/* ft_strrev */

/* inter */

/*is_power_of_2 */

/* last_word */

/* max */

/* print_bits */

/* reverse_bits*/

/* swap_bits */

/* union */

/* wdmatch */

/*--------LEVEL 3---------*/

/* add_prime_sum */

/* epur_str */

/* expand_str */

/* ft_atoi_base */

/* ft_list_size */

/* ft_range */

/* ft_rrange */

/* hidenp */

/* lcm */

/* parasum */

/* pgcd /*

/* print_hex */

/* rstr_capitalizer*/

/* str_capitalizer */

/* tab_mult */


/*--------LEVEL 4--------*/

/* fprime */

/* ft_itoa */

/*ft_list_foreach */

/*ft_list_remove_if */

/*ft_split*/

/*rev_wstr*/

/*rsotring */

/*sort_int_tab*/

/*sort_list*/


/* -------LEVEL 5 --------*/

/* brackets */

/*brainfuck */

/* check_mate */

/* ft_itoa_base */

/* options */

/* print_memory */

/* rpn_calc */


