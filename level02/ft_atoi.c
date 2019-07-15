#include <stdio.h>
#include <stdlib.h>
int		ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;

	if (str == '\0')
		return (0);
	while (*str && (*str == '\f' || *str == '\n' || *str == '\t' || *str == '\v' || *str == ' ' || *str == '\r'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (nbr * sign);
}

int		main(int ac, char **av)
{
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
	return 0;
}
