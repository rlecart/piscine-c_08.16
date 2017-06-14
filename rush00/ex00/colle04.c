/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlanduyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 09:12:19 by vlanduyt          #+#    #+#             */
/*   Updated: 2016/08/06 13:09:28 by fmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	doline(int x, char l[])
{
	if (x >= 1)
	{
		ft_putchar(l[0]);
	}
	while (x - 2 > 0)
	{
		ft_putchar(l[1]);
		x--;
	}
	if (x >= 2)
	{
		ft_putchar(l[2]);
	}
	if (x >= 1)
	{
		ft_putchar('\n');
	}
}

void	colle(int x, int y)
{
	int		n;
	char	l[3];

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
			l[2] = 'C';
		}
		else if (n == 1)
		{
			l[0] = 'C';
			l[1] = 'B';
			l[2] = 'A';
		}
		doline(x, l);
		n--;
	}
}
