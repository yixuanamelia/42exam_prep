#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int		i;
	int		a;
	int		b;
	char	**split;

	i = 0;
	a = 0;
	b = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	while (str[i])
	{
		if (!(split[a] = malloc(sizeof(char*) * 4096)))
			return (NULL);
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			split[a][b++] = str[i++];
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		split[a][b] = '\0';
		a++;
		b = 0;
	}
	printf("str: %s\n", str);
	printf("0: %s\n", split[0]);
	printf("1: %s\n", split[1]);
	printf("2: %s\n", split[2]);
	printf("3: %s\n", split[3]);
	return (split);
}

int		main(void)
{
	ft_split("This is a deal");
	return 0;
}
