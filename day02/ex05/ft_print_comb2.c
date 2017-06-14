/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 13:33:35 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/06 16:50:51 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int nb1, int nb2)
{
			ft_putchar(nb1 / 10 + '0');
			ft_putchar(nb1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nb2 / 10 + '0');
			ft_putchar(nb2 % 10 + '0');
}

void	ft_print_comb2(void)
{
	int		nb1;
	int		nb2;

	nb1 = 0;
	nb2 = 0;
	while (!(nb1 == 98 && nb2 == 100))
	{
		if (nb2 == 100)
		{
			nb2 = 0;
			nb1++;
		}
		if (nb1 >= nb2)
			nb2++;
		if (nb1 < nb2)
		{
			ft_print_num(nb1, nb2);
			if (!(nb1 == 98 && nb2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nb2++;
		}
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
