#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int nbr;

	nbr = 0;
	if (*str == '-')
		return (0);
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str <= 57))
			return (0);
		nbr = (nbr * 10) + (*str++ - 48);
		i++;
	}
	return (nbr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int		ft_is_prime(int nbr)
{
	int i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void add_prim_sum(int nbr)
{
	int i;
	int count;

	i = 2;
	count = 0;
	while (i <= nbr)
	{
		if (ft_is_prime(i))
			count = count + i;
		i++;
	}
	ft_putnbr(count);
}

int main(int argc, char **argv)
{
	char zero;
	char rtn;

	zero = '0';
	rtn = '\n';
	if (argc == 2)
		add_prim_sum(ft_atoi(argv[1]));
	else
		write(1, &zero, 1);
	write(1, &rtn, 1);
	return (0);
}
