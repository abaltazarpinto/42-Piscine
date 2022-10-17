/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:42:40 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/11 15:59:15 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi(const char *str)
{

	int res;
	int sign;

	res = 0;
	sign = 1;
	// help handling the all the spaces and tabs that is 32 and between 9 and 13
	while(*str == 32 || (*str >= 9 && *str <= 13)) 
	{
		str++;
	}
	if(*str == '-')
		sign *= -1;
	if(*str == 45 || *str == 43)
		str++;
	while(*str >= '0' && *str <= '9')
	{	
		// if you got 10 we made 10 * 100 serve as placeholder
	 	res = res * 10 + *str - '0';
		str++;
		
	}
	return(res * sign);
}

int main(int ac, char **av)
{
	int mine;
	int theirs;

	if(ac == 2)
	{
		mine = ft_atoi(av[1]);
		theirs = atoi(av[1]);
		printf("mine: %d | theirs: %d\n", mine, theirs);
	}
	return(0);
}
