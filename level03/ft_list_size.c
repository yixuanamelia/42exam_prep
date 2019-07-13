/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:31:09 by yiwang            #+#    #+#             */
/*   Updated: 2019/07/13 15:31:13 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*list;

	size = 0;
	list = begin_list;
	if (list)
	{
		while (!(list->next))
		{
			list = list->next;
			size += 1;
		}
	}
	return (size - 1);
}
