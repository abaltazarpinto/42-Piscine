/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:36:52 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/13 16:34:54 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	dif;
	int	*comidela;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dif = max - min;
	comidela = malloc(dif * sizeof(int));
	if (!comidela)
		return (-1);
	while (min < max)
	{
		comidela[i] = min;
		i++;
		min++;
	}
	*range = comidela;
	return (i);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 0;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	printf("%d", size);
	printf("\n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
*/
