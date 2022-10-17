/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:35:17 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/13 15:52:06 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{	
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof (char) * ft_strlen + 1);
	if (!new)
	{
		return (NULL);
	}
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	char *mine;
	char *theirs;
	
	if(ac == 2)
	{
		mine = ft_strdup(av[1]);
		theirs = strdup(av[1]);
		printf(":%s: \n:%s: \n", mine, theirs);
	}
	return(0);
}*/
