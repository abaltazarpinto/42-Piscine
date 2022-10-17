/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:31:26 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/03 16:26:02 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comparar(char *X, char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*str == *to_find && comparar(str, to_find))
		{
			return (str);
		}	
		str++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int	main()
{
        char *X = "Sera que da Vamos bem sucedido";
        char *Y = "Vamos";

        //printf("%s\n", ft_strstr(X, Y));
        printf("%s\n", strstr(X, Y));

	return(0);
}*/
