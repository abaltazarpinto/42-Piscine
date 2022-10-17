/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:35:35 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 01:24:47 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int size, char **arg)
{
	int	i;
	int	o;

	o = 1;
	if (size > 1)
	{
		while (o < size)
		{
			i = 0;
			while (arg[o][i] != '\0')
				i++;
			write(1, arg[o], i);
			write(1, "\n", 1);
			o++;
		}
	}
	return (0);
}
