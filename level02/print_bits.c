/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:10:30 by yiwang            #+#    #+#             */
/*   Updated: 2019/07/13 15:28:02 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		oct;
	int		div;

	oct = octet;
	div = 128;

	while (div != 0)
	{
		if (div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
		{
			write(1, "0", 1);
		}
		div = div / 2;
	}
}

int		main(int ac, char **av)
{
	print_bits(atoi(av[1]));
	return (0);
}
