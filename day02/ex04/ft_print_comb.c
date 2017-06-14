/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 20:02:02 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/06 17:45:42 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnum(char h, char d, char u)
{
	if (h < d && d < u)
	{
		ft_putchar(h);
		ft_putchar(d);
		ft_putchar(u);
		if (!(h == '7' && d == '8' && u == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int		h;
	int		d;
	int		u;

	h = '0';
	d = '0';
	u = '0';
	while (h <= '7')
	{
		while (d <= '8')
		{
			while (u <= '9')
			{
				ft_printnum(h, d, u);
				u++;
			}
			u = '0';
			d++;
		}
		d = '0';
		h++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
