/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:48:08 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/10 01:56:40 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	c = argc - 1;
	while (c > 0)
	{
		i = 0;
		while (argv[c][i])
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		c--;
	}
	return (0);
}
