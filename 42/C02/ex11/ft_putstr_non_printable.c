/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:21:22 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/03 11:24:23 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isnonprintable(int n)
{
	if (n < 32)
		return (1);
	else
		return (0);
}

void	conversionhex(int a)
{
	int	tmp;
	int	h;

	tmp = a;
	tmp = tmp / 16;
	if (tmp < 16)
		h = '0' + tmp;
	else
		h = 'a' + tmp - 10;
	write(1, &h, 1);
	tmp = a;
	tmp = tmp % 16;
	if (tmp < 10)
		h = '0' + tmp;
	else
		h = 'a' + tmp - 10;
	write(1, &h, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!isnonprintable(str[c]))
		{
			write(1, &str[c], 1);
		}
		else if (isnonprintable(str[c]))
		{
			write(1, "\\", 1);
			conversionhex(str[c]);
		}
		c++;
	}
}
/*
#include <stdio.h>
int     main(void)
{
        char str[] = "This morning \n is \a \b \t \n \v \f \r right";
        ft_putstr_non_printable(str);
        return (0);

}
*/
