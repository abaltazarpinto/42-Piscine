/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:02:44 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/07 01:48:56 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	get_digit(char c, int digits_in_base)
{
	int	max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;
	int	digit;

	res = 0;
	sign = 1;
	if (*str == '-')
	{
		sign *= -1;
		+str;
	}
	digit = ((get_digit(to_lower(*str), str_base)) >= 0);
	while (digit)
	{
		res = res * str_base;
		res = res + (digit * sign);
		str++;
	}
	return (res);
}
/*

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_atoi_base("15690b80B",13));
}
*/
