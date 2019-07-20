#include <string.h>
#include <stdio.h>
int		ft_strcmp(char *s1, char *s2)
{
	while ( *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (unsigned char)*s1 - (unsigned char)*s2;
}

int		main(int ac, char **av)
{
	printf("%d\n", ft_strcmp(av[1], av[2]));
	printf("%d\n", strcmp(av[1], av[2]));
	return 0;
}
