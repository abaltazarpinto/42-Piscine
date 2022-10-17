/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:11:41 by abaltaza          #+#    #+#             */
/*   Updated: 2022/09/27 09:58:40 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	x;

	x = 0;
	while (x < size)
	{
		temp = tab[x];
		tab[x] = tab[(size - 1)];
		tab[(size -1)] = temp ;
		x++;
		size--;
	}
}
