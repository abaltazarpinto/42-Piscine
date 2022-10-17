/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:39:53 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/12 00:54:24 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
==========================================================================================
*/
#include <unistd.h>

int not_seen_before(char *s, char a, int max_pos)
{
	int i;

	i = 0;
	while(i < max_pos)
	{
		if(s[i] == a)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int i;
	int len;
	int temp;

	i = 0;
	len = 0;
	while(s1[len] != '\0')
		len++;
	temp = len;
	
	while(s2[i] != '\0')
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	
	i = 0;

	while(s1[i] != '\0' && i < temp )
	{
		if(not_seen_before(s1, s1[i], i))
		{
			write(1, &s1[i], 1);
		}
	i++;
	}
}

int main(int ac, char**av)
{
	if( ac == 3)
	{
		ft_inter(av[1], av[2]);
	}
	write(1, "\n", 1);
	return(0);
}
