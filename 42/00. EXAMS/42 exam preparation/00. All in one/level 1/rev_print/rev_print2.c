/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:44:39 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/13 12:14:26 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_rev_print (char *str)
{
	int i = 0;	

	while(str[i] != '\0')
	{
		i++;
	}
	i--;
	
	while(i >= 0)
	{
		write(1, &str[i], 1);	
		i--;	
	}
	return (str);
}

int	main()
{
	char s[] = "Hello";
	ft_rev_print(s);
	return (0);
}
