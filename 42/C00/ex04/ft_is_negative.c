/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:40:47 by abaltaza          #+#    #+#             */
/*   Updated: 2022/09/25 11:45:42 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, &"N", 1);
	}
	else
	{	
		write (1, &"P", 1);
	}
}