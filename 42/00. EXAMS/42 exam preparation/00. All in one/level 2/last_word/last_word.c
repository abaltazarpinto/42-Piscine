/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:23:49 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/12 14:47:25 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>
#include <stdio.h>

void ft_last_word(char *s)
{
	int i;

	i = 0;
	while(s[i] !='\0')
	{
		i++;
	}
	i--;
	
	while(s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
	{
		i--;
	}
	
	while(((s[i] != 32 || (s[i] <= 9 && s[i] >= 13)) && (i >= 0) ))
	{
		i--;
	}
	
	if (i != 0)
	{
		i++;
	}
	
	while(s[i] != 32 && (!(s[i] >= 9 && s[i] <= 13)) && s[i] !='\0' )
	{
		write(1, &s[i], 1);
		i++;
	}	

}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_last_word(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}
