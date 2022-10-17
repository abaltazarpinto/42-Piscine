/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:45:40 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 22:12:47 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first 
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
*/

#include <unistd.h>

int ft_strlen(char *c)
{
	int x;

	x = 0;
	while(c[x] != '\0')
	{
		x++;
	}
	return(x);
}

int main(int ac, char **av)
{
	int c;

	c = 0;
	if(ac == 4)
	{
		while((av[1][c] != '\0' && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1))
		{	
			if(av[1][c] == av[2][0])
				write(1, &av[3][0], 1);
			else
				write(1, &av[1][c], 1);
			c++;
		}

	}
	write(1, "\n", 1);
	return(0);
}
