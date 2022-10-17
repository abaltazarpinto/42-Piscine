/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:29:01 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/07 01:27:49 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb >= 10 && nb <= 2147483647)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
/*
int		main(void)
{
    printf(" (printed) should be 1 | %c", ft_putnbr(1));
    printf("\n (printed) should be 0 | %c", ft_putnbr(0));
    printf("\n (printed) should be -1 | %c", ft_putnbr(-1));
    printf("\n (printed) should be 2147483647 | %c", ft_putnbr(2147483647));
    printf("\n (printed) should be -21474836478 | %c", ft_putnbr(-21474836478));
    printf("\n");
    return (0);
}*/
