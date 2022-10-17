/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:25:16 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/06 22:39:42 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int get_letter_count(char c)
{
	if (c >= 'a' && c <= 'z')
		return ( c - 'a' + 1);
	else if( c >= 'A' && c <= 'Z')
		return (c - 'A' + + 1);
	return(1);	
}

int main(int ac, char **av)
{
	int i;
	int count;

	i = 0;
	if (ac ==2)
	{
		while (av[1][i])
		{
			count = get_letter_count(av[1][i]);
			while (count --)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

