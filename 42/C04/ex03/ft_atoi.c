/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:01:49 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/07 01:32:03 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
	sign *= -1;
	if (*str == '-' || *str == '+')
	str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
/*
int main(int ac, char **av)
{
    int mine;
    int theirs;

    if(ac == 2)
    {
        mine = ft_atoi(av[1]);
        theirs = atoi(av[2]);

        printf("mine %d | theirs : %d\n", mine, theirs)
    }
    return(0);)
}

int main ()
{
    int     n;
    int     s;

    n = ft_atoi("-1276");
    s = atoi("-1276");

    printf("%d | %d", n, s);
}
*/
