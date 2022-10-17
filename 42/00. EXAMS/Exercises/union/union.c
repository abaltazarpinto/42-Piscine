/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:21:22 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/07 16:30:51 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.
*/
#include<unistd.h>

int main(int ac, char **av)
{
	char s[256] = {0};
	int i;
	int j;

	i = 0;
	j = 1;

	if (ac == 3)
	{
		while (j< 3)
		{
			while(av[j][i])
			{
				s[(int)av[j][i++]] = 1;
			}
			i = 0;
			j++;	
		}
		j = 1;
		while (j < 3)
		{
			while (av[j][i])
			{
				if(s[(int)av[j][i]] == 1)
				{
					write(1, av[j][i], 1);
					s[(int)av[j][i]] == 2;
				}
				i++;
			}
			i = 0
			j++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
