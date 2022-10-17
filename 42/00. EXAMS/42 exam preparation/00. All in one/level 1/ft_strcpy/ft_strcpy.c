/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:17:16 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 19:20:04 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
	//criar um contador para rodar entre a array
	int	i;

	i = 0; 
	// temos de ter em conta o tamanho da source uma vez que e o ficheiro a copiar
	while(s2[i] != ''\0')
	{
		s1[i] = s2[i];
		i++
	}
	//reafirmar que a s1 acabou
	s1[i] = '\0';
	return(s1);
}
