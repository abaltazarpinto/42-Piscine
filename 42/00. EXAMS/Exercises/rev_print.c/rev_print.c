/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:44:39 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/07 15:59:26 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *c)
{
	int x;
	
	x = 0;
	while (*c++)
	{
		x++;
	}
	return(x);
}


int main(int ac, char **av)
{
	int x;

	if (ac == 2)
	{
		x = ft_strlen(av[1]);
		while(*av[1] <= x)
		{
			write(1, &av[1][x], 1);
			x--;
		}
	}
	write(1, "\n", 1);
	return(0);
}
