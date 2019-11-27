
#include <unistd.h>

void	print_hex(int n)
{
	char base[] = "0123456789abcdef";

	if (n > 15)
	{
		write(1, &base[(n / 16) % 16], 1);
		write(1, &base[n % 16], 1);
	}
	else if (n < 16)
	{
		write(1, "0", 1);
		write(1, &base[n % 16], 1);
	}
}

void	print_ascii(int n)
{
	if (31 < n && n < 127)
		write(1, &n, 1);
	else
		write(1, ".", 1);
}

void	print_memory(const void *addr, size_t size)
{
	unsigned char	*tab;
	size_t			i;
	size_t			j;
	size_t			k;

	i = 0;
	tab = (unsigned char*)addr;
	while (i < size)
	{
		j = -1;
		while (++j < 16)
		{
			(i + j < size) ? print_hex(tab[i + j]) : write(1, "  ", 2);
			(j != 0 && j % 2 == 1) ? write(1, " ", 1) : 0;
		}
		k = -1;
		while (++k < 16 && i < size)
			print_ascii(tab[i++]);
		write(1, "\n", 1);
	}
}
