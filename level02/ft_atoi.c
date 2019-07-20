#include <stdio.h>
#include <stdlib.h>
int		ft_isspace(int c)
{
	return (( 9 <= c && c <= 13) || c == 32);
}

int		ft_atoi(char *str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;

	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
		nbr = (nbr * 10) + (*str++ - '0');
	return (nbr * sign);
}

int		main(int ac, char **av)
{
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
	return 0;
}
