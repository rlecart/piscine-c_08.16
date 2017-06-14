/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaubres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 06:40:26 by nlaubres          #+#    #+#             */
/*   Updated: 2016/08/21 21:29:41 by nlaubres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_print_int(int x, int y)
{
	ft_putchar('[');
	ft_putnbr(x);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(y);
	ft_putchar(']');

}


void	ft_sol_8(int x, int y)
{
	ft_putstr("[colle-03] ");
	ft_print_int(x, y);
	ft_putstr(" || [colle-04] ");
	ft_print_int(x, y);
	ft_putchar('\n');
}

void	ft_mul_sol(int i, int x, int y)
{
	if(i == 9)
	{
		ft_putstr("[colle-02] ");
		ft_print_int(x, y);
		ft_putstr(" || [colle-03] ");
		ft_print_int(x, y);
		ft_putstr(" || [colle-04] ");
		ft_print_int(x, y);
	}
	if (i == 8)
	{
		ft_putstr("[colle-02] ");
		ft_print_int(x, y);
		ft_putstr(" || [colle-03] ");
		ft_print_int(x, y);
	}
	if (i == 7)
	{
		ft_putstr("[colle-02] ");
		ft_print_int(x, y);
		ft_putstr(" || [colle-04] ");
		ft_print_int(x, y);
	}
}

void	ft_print_sol(int i, int x, int y)
{

	if(i >= 0 && i <= 6)
	{
		if (i == 0)
		{
			ft_putstr("aucune\n");
			return ;
		}
		if (i == 1)
			ft_putstr("[colle-00] ");
		if (i == 2)
			ft_putstr("[colle-01] ");
		if (i == 3)
			ft_putstr("[colle-02] ");
		if (i == 4)
			ft_putstr("[colle-03] ");
		if (i == 5)
			ft_putstr("[colle-04] ");
		ft_print_int(x, y);
	}
	if (i >= 7 && i <= 9)
		ft_mul_sol(i, x ,y);
	if (i == 8)
		ft_sol_8(x, y);
}










