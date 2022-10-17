/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:54:50 by abaltaza          #+#    #+#             */
/*   Updated: 2022/09/26 16:00:06 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escrever(char e)
{
	write(1, &e, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0' )
	{
		escrever(str[x]);
		x++;
	}
}
