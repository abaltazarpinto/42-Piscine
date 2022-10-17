/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:21:30 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 00:18:32 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		while (power >= 1)
		{
			return (nb * ft_recursive_power(nb, (power - 1)));
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
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	int n;
	int power;
	
	n = 2;
	power = 3;
	printf("%d elevado a %d e: %d", n, power, ft_recursive_power(n, power));
}
*/
