/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:54:56 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/07 01:06:07 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


int main(int ac, char **av)
{
	long v1;
	long v2;
	long answer;

	if (ac == 4)
	{
		v1 = atoi(av[1]);
		v2 = atoi(av[3]);
		if(*av[2] == '+')
			answer = v1 + v2;
		else if (*av[2] == '-')
			answer = v1 - v2;
		else if (*av[2] == '*')

			answer = v1 * v2;
		else if (*av[2] == '/')
			answer = v1 / v2;
		else 
			answer = v1 % v2;
		if(answer >= INT_MIN && answer <= INT_MAX)
			printf("%d", (int)answer);

	}	
	printf("\n");
	return(0);
}
