/*aff a
Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.
*/

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char ft_aff_a(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
			ft_putchar('\n');
			return(*str);
		}
		i++;
	}
	return(0);
}
int	main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_aff_a(av[1]);
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
