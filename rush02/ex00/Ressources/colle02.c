/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaubres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 20:15:12 by nlaubres          #+#    #+#             */
/*   Updated: 2016/08/21 23:40:43 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

char	*gen_colle_02(int x, int y)
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
		l[0] = 'B';
		l[1] = ' ';
		l[2] = 'B';
		if (n == y)
		{
			l[0] = 'A';
			l[1] = 'B';
			l[2] = 'A';
		}
		else if (n == 1)
		{
			l[0] = 'C';
			l[1] = 'B';
			l[2] = 'C';
		}
		doline(x, l, str, &i);
		n--;
	}
	free(str);
	return(str);
}
