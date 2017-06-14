/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaubres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 11:48:05 by nlaubres          #+#    #+#             */
/*   Updated: 2016/08/21 21:25:50 by nlaubres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int		ft_count_x(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\n')
		x++;
	return (x);
}

int		ft_count_y(char *str)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	return (y);
}

int		main(void)
{
	char	str[BS + 1];
	char	c;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while ((read(0, &c, 1)))
		str[i++] = c;
	str[i] = '\0';
	x = ft_count_x(str);
	y = ft_count_y(str);
	if (x == 0 || y == 0)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	ft_print_sol(ft_check_all(str, x, y), x, y);
	ft_putchar('\n');
	return (0);
}
