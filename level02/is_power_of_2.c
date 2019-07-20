#include <stdlib.h>
#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	return ((n & (-n)) == n ? 1 : 0);
}

int		main(int ac, char **av)
{
	printf("%d\n", is_power_of_2(atoi(av[1])));
	return 0;
}
