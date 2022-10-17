/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:22:16 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 14:40:12 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index ++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int main ()  
{  
// declaration of the variables  
    int num;  
     
    printf (" Enter a number to get the square root: ");  
    scanf (" %d\n", &num);  
     
    printf (" The square root of %d is %d", num, ft_sqrt(num));  
    return (0);
}
*/
