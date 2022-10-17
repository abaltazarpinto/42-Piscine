/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:20:01 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 00:35:56 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	fact;

	fact = 1;
	while (nb > 0)
	{	
		fact *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (fact);
}
/*
#include <stdio.h>

int main()
{
	int n = 5;
	printf("The factorial of %d is %d\n", n, ft_iterative_factorial(n)); 
	int n1 = 0;
	printf("The factorial of %d is %d\n", n1, ft_iterative_factorial(n1)); 
	int n2 = -1;
	printf("The factorial of %d is %d\n", n2, ft_iterative_factorial(n2)); 
}
*/
