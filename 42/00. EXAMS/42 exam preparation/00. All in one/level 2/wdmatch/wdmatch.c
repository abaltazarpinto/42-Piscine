/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:32:14 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/11 17:57:21 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$*/

#include <unistd.h>


int checkdouble(char *b, char a)
{
	int c;

	c = 1;
	while(b[c] != '\0')
	{
		if(b[c] == a)
			return 0;
	c++;
	}
	return(1);
}


char *compare(char *a, char *b)
{
	int x;
	int j;
	

	j = 0;
	x = 0;
	//enquanto o caractere nao e um caractere final continuar o loop
	while(a[j] != '\0')
	{
		while(b[x] != '\0')
		{
			if(a[j] == b[x] && (checkdouble(b, a[j]) == 1))
			{ 	
				write(1, &b[x], 1);

			}	
	 	 x++;	
		}
		j++;
	}
	write(1, "\n", 1);
	return(0);
}
//receber um caratere e string 


int main(int ac, char **av)
{
	if(ac == 3)
	{
		compare(av[1],av[2]);			
	}
	write(1, "\n", 1);
	return(0);
}

