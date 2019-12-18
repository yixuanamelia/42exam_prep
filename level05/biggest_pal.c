#include <unistd.h>
#include <stdio.h>

void print_pal(char *s, int low, int high)
{
	while (low <= high)
		write(1, &s[low++], 1);
}

void biggest_pal(char *s)
{
	int i;
	int len;
	int low;
	int high;
	int max_len;
	int start;

	len = 0;
	while (s[len])
		len++; /*calculate the length of the string */
	i = 1; /*length variable */
	max_len = 1; /*if there is one char only */
	while (++i < len)
	{
		low = i - 1; /*the first character of the argument */
		high = i;
		while (low >= 0 && high < len && s[low] == s[high])
		{
			if (high - low + 1 > max_len)
			{
				start = low;
				max_len = high - low + 1;
				printf("1 : %d\n", max_len);
			}
			--low;
			++high;
		}
		low = i - 1;
		high = i + 1;
		while (low >= 0 && high < len && s[low] == s[high])
		{
			if (high - low + 1 > max_len)
			{
				start = low;
				max_len = high - low + 1;
				printf("2 : %d\n", max_len);
			}
			--low;
			++high;
		}
	}
	print_pal(s, start, start + max_len - 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		biggest_pal(argv[1]);
	write(1, "\n", 1);
	return (0);
}
