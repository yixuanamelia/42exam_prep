#include <stdlib.h>
#include <stdio.h>
char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	printf("str = %s\n", str);
	printf("0 %s\n", split[0]);
	printf("1 %s\n", split[1]);
	printf("2 %s\n", split[2]);
	printf("3 %s\n", split[3]);
	printf("4 %s\n", split[4]);
	return (split);
}

int		main(int ac, char **av)
{
	ft_split("you are awesome that's right");
	return 0;
}
