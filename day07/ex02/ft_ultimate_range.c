/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 17:01:08 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/21 06:09:02 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		strlen;

	i = 0;
	strlen = max - min;
	if (min >= max)
		return (0);
	if (!(*range = (int*)malloc(sizeof(int) * strlen)))
		return (0);
	while (min != max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (strlen);
}
