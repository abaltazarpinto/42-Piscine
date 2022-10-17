/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:35:47 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/12 21:53:43 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*s;
	int	i;
	int	range;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	s = (int *)malloc(sizeof (int) * (range));
	if (!s)
	{
		return (NULL);
	}
	while (i < range)
	{
		s[i] = min + i;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	int min = 2 ;
	int max =  10;
	int size = max - min;
	int i = 0;
	int *a = ft_range(min, max);

	while (i < size)
	{
		printf("%d ", a[i]);
		i++;
	}
	return (0);
}
*/	
