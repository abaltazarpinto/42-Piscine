/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:25:04 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 00:08:46 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	flag;
	int	i;

	flag = 0;
	if (nb == 0 || nb == 1 || nb < 0)
		flag = 1;
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	if (flag == 0)
		return (1);
	else if (flag == 1)
		return (0);
	else
		return (0);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 19, ft_is_prime(19));
}*/
