/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:06:30 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/13 00:10:39 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Ecrire un programme qui écrit une suite de nombres de 1 à 100 sur la sortie 
standard, tous séparés par une newline. 

Si le nombre est un multiple de 3, le programme doit écrire 'fizz' à la place.

Si le nombre est un multiple de 5, le programme doit écrire 'buzz' à la place.

Si le nombre est un multiple de 3 et un multiple de 5, le programme doit écrire 
'fizzbuzz' à la place.

Exemple:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/
#include <unistd.h>

void ft_number(int a)
{
    if(a > 9)
    {
        ft_number(a / 10);
    }
    else
    {
        write(1, &"0123456789"[a % 10] ,1);
    }
}

int main(void)
{
    int n;
    
    n = 1;
    while(n < 100)
    {
        if( n % 5 == 0 && n % 3 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if( n % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if( n % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else 
        {
            ft_number(n);
        }
        write(1, "\n", 1);
        n++;
    }
}




