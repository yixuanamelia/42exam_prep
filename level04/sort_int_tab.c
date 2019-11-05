/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:34:56 by yiwang            #+#    #+#             */
/*   Updated: 2019/08/13 11:53:31 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	int				tmp;
	unsigned int	a;

	a = 1;
	if (size != 0)
	{
		while (a <=size)
		{
			if (tab[a] < tab[a - 1])
			{
				tmp = tab[a];
				tab[a] = tab[a - 1];
				tab[a - 1] = tmp;
				a = 0;
			}
			++a;
		}
	}
}

#include <stdio.h>
int		main(void)
{
	int		tab[10];
	int		i = 0;

	tab[0] = 8;
	tab[1] = 4;
	tab[2] = 6;
	tab[3] = 5;
	tab[4] = 9;
	tab[5] = 7;
	tab[6] = 3;
	tab[7] = 1;
	tab[8] = 0;
	tab[9] = 2;
	sort_int_tab (tab, 9);
	while (i <= 9)
		printf("%d\n", tab[i++]);
	return(0);
}
