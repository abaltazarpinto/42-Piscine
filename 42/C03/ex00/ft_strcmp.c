/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:55:16 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/04 10:12:54 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
/*

#include <stdio.h>
int	main()
{
	printf("%d", ft_strcmp("Vamos", "Vamos1"));
	printf("\n%d", ft_strcmp("Hellosss", "Heyyyy"));
	printf("\n%d", ft_strcmp("nao", "naooooooo"));
	printf("\n%d", ft_strcmp("SIM", "SIM"));
}*/
