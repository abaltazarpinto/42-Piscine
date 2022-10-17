/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:47:00 by abaltaza          #+#    #+#             */
/*   Updated: 2022/09/25 11:26:20 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	letra(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			letra ((i / 10) + 48);
			letra ((i % 10) + 48);
			letra (' ');
			letra ((j / 10) + 48);
			letra ((j % 10) + 48);
			if (i != 98)
			{
				letra(',');
				letra(' ');
			}
		}
	}
}
