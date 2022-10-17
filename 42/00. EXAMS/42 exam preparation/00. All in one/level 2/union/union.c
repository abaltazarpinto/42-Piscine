/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:27:26 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/12 00:05:18 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int not_seen_before(char *s1, char a, int max_pos)
{
	int i;
	
	i = 0;
	while(i < max_pos)
	{	
		if(s1[i] == a)
			return(0);	
		i++;
	}
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while(s1[len])
		len++;
	
	while(s2[i] != '\0')
	{
		s1[len] = s2[i];
		i++;
		len++;
	}
	s1[len] = '\0';
	
	i = 0;
	while(s1[i] != '\0')
	{
		if(not_seen_before(s1, s1[i], i))
		{
			write(1, &s1[i], 1);
		}
		i++;
	}
}


int main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}
