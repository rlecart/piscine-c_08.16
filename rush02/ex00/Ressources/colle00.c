/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaubres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 20:15:29 by nlaubres          #+#    #+#             */
/*   Updated: 2016/08/21 23:40:08 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

char	*gen_colle_00(int x, int y)
{
	int		n;
	char	l[3];
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * x * y + y + 1);
	i = 0;
	n = y;
	while (n > 0)
	{
		l[0] = '|';
		l[1] = ' ';
		l[2] = '|';
		if (n == y)
		{
			l[0] = 'o';
			l[1] = '-';
			l[2] = 'o';
		}
		else if (n == 1)
		{
			l[0] = 'o';
			l[1] = '-';
			l[2] = 'o';
		}
		doline(x, l, str, &i);
		n--;
	}
	free(str);
	return(str);
}
