#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		k;

	if (argc > 1)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i += 1;
		k = i;
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i += 1;
		while (argv[1][i])
		{
			if (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t') \
				&& (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
			{
				while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
					write(1, &argv[1][i++], 1);
				write(1, " ", 1);
			}
			i += 1;
		}
		while (argv[1][k] && (argv[1][k] != ' ' && argv[1][k] != '\t'))
			write(1, &argv[1][k++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
