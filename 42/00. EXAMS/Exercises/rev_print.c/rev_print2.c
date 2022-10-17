/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:53:46 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/07 15:58:30 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *s)
{
	int i;
	
	i = 0;
	while(*s++)
		i++;
	return (i);	
}

#include <unistd.h>

int main(int ac, char **av)
{
	int len;

	if(ac ==2)
	{
		len = ft_strlen(av[1]);
		while (len --)
		{
			write(1, &av[1][len], 1);
		}

	}
	write(1, "\n", 1);
	return(0);
}
