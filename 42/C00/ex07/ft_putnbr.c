/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:50:26 by abaltaza          #+#    #+#             */
/*   Updated: 2022/09/25 15:16:13 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	numero(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)

{
	if (nb == -2147483648)
	{
		numero('-');
		numero('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{	
		numero('-');
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb >= 10 && nb <= 2147483647)
	{
		ft_putnbr((nb / 10));
		ft_putnbr((nb % 10));
	}
	else
	{
		numero(nb + 48);
	}	
}
