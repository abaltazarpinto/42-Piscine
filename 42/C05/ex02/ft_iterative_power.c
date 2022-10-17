/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:21:02 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 00:19:38 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	h;

	h = 1;
	if (power > 0)
	{
		while (power >= 1)
		{
			h *= nb;
			power--;
		}
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (h);
}
/*
#include <stdio.h>
int main()
{
	int n;
	int power;
	
	n = -2;
	power = 2;
	printf("%d elevado a %d e: %d", n, power, ft_iterative_power(n, power));
}
*/
