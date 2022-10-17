/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:20:25 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/09 23:57:34 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
/*
#include <stdio.h>

int main()
{
	int n = 5;
	printf("The factorial of %d is %d\n", n, ft_recursive_factorial(n)); 
	int n1 = 0;
	printf("The factorial of %d is %d\n", n1, ft_recursive_factorial(n1)); 
	int n2 = -1;
	printf("The factorial of %d is %d\n", n2, ft_recursive_factorial(n2)); 
}
*/
