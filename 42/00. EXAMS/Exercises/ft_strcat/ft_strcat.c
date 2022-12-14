/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:48:29 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/04 10:38:26 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	k;

	x = 0;
	k = 0;
	while (dest[x] != '\0' )
	{
		x++;
	}	
	while (src[k] != '\0')
	{
		dest[x] = src[k];
		x++;
		k++;
	}
	dest[x] = '\0';
	return (dest);
}
