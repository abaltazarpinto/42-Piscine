/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:48:05 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 19:54:13 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Write a program called repeat_alpha that takes a string and display it
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

int 	main(int ac, char *av[])
{
	// criar dois contadores
	int i;
	int letter;
	
	i = 0;
	if(ac ==2)
	{
		while(av[1][i])
		{	
			if (av[1][i] >= 'A' && 'Z' >= av[1][i])
			{
				// assim vamos buscar as repeticoes necessarias a fazer. 
				letter = av[1][i] - 63;
				// penso que deveriamos por aqui o while 
				while (letter--)
					write(1, &av[1][i], 1);
			}
			else if (av[1][i] >= 'a' && 'z' >= av [1][i])
			{
				letter = av[1][i] - 95;
				while (letter--)
					write(1, &av[1][i], 1);
			}
			else
				write (1, &av[1][i], 1);
			i++;
		}
		
	}
	write(1, "\n",1);
	return(0);
}
