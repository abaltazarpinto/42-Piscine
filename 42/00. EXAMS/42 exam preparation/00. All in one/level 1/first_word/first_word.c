#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int ac, char **av)
{
	int i;
	
	if (ac == 2)
	{
		
		while(av[1][i] == 32 || av[1][i] == '\t')
		{
		 	i++;
		}
		while(((av[1][i] != 32 || av[1][i] != '\t') && (av[1][i] != '\0')))
		{
			ft_putchar(av[1][i]);
			i++;
		}		 
	}
	ft_putchar('\n');
	return(0);
}
