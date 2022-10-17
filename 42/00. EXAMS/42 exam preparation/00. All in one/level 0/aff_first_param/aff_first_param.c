/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:47:21 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 16:58:25 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
