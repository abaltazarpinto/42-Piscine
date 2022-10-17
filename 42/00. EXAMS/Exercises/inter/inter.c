/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:52:54 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/07 00:36:11 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Write a program that takes two strings and displays, without doubles, the characters that appear in both strings, in the order they appear in the first one. 


// For help
// star with a counter
// two strinfs
// *s2
// *s1
// while s2[i]
#include <unistd.h>

void	print_chars(char *s1, char *s2)
{
	int tab[256] = {0};

	int i = 0;
	while (s2[i])
		tab[(int)s2[i++]] = 1;
	i = 0;
	while (s1[i])
	{
		if (tab[(int)s1[i]] == 1)
		{
			write(1, &s1[i], 1);
			tab[(int)s1[i]] = 2;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
	{
		print_chars(av[1], av[2]);	
	}
	write(1, "\n", 1);
	return(0);
}

