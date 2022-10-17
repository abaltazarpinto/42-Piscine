/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:14:37 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/13 14:24:02 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
write the following function

int	*ft_range(int start, int end)
{
	It must allocate (with malloc()) an array of integers, fill it with consecutive values that begin at start and end at end (Including start and end !), then return a pointer to the first value of the array. 
}
*/

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int	*ft_range(int start, int end)
{
	int i;
	int range;
	int *s;

	s = 0;
	i = 0;
	if(end >= start)
	{
 		range = (end - start) + 1;
	}
	else if(start > end )
	{
		range = (start - end) ; 
	}
	
	s = (int *)malloc(sizeof(int) * (range));
	if (!s)
	{
		return NULL;
	}
	while(start != end)
	{	
		if(end > start)
		{
			s[i] = start + i;
			i++;
		}
		else if(start > end)
		{
			s[i] = start - i;
			i--;
		}
	}
	return(s);
}

int main()
{
	int	min = 5;
	int	max = 10;
	ft_range(min, max);
	return (0);
}


/*
Help:

- contruct the range to insert in the malloc
- constructing a malloc function
- while to print all the values of the array.

with (1,3) you will return an array containing 1, 2 and 3)*/
