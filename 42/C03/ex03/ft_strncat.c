/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:14:20 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/04 16:04:45 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	k;

	x = 0;
	k = 0;
	while (dest[x])
	{
		x++;
	}
	while (k < nb && src[k])
	{
		dest[x + k] = src[k];
		k++;
	}
	dest[x + k] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "O que diz esquina";
	char dest[] = "Deu";
			
	printf(" funcao criada por mim : %s", ft_strncat(dest,src, 65));
	char src1[] = "O que diz esquina";
        char dest1[] = "Deu";

	printf("\n funcao : %s", strncat(dest1,src1, 60));
	return (0);
}*/
