/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:36:20 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/04 12:20:11 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_l;
	unsigned int	src_l;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	dest_l = i;
	src_l = ft_strlen(src);
	if (size == 0 || size <= dest_l)
		return (src_l + size);
	while (src[j] && j < size - dest_l - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_l + src_l);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char src[] = "Hello its me";
    	char dest [] = "1337 42";
    	printf("%d \n", ft_strlcat(dest, src, 20));

    	printf("%s \n", dest);
}*/	
