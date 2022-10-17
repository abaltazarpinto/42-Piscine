/*rev_print*/
#include <unistd.h>

int main(int ac, char **av)
{
	int x; 
	
	if (ac == 2)
	{
		while (av[1][x] !='\0')
		{	
			x++;
		}
		x--;
		while (x >= 0)
		{
			write(1, &av[1][x], 1);
			x--;	
		}
	}
	write(1, "\n", 1);
	return (0);
} 
