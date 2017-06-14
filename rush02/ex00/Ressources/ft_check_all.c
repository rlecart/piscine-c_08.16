/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 19:49:01 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/21 21:22:41 by nlaubres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int		ft_check_c02(char *str, int x, int y)
{
	if (ft_strcmp(str, gen_colle_02(x, y)) == 0)
		return (1);
	return (0);
}

int		ft_check_c03(char *str, int x, int y)
{
	if (ft_strcmp(str, gen_colle_03(x, y)) == 0)
		return (1);
	return (0);
}

int		ft_check_c04(char *str, int x, int y)
{
	if (ft_strcmp(str, gen_colle_04(x, y)) == 0)
		return (1);
	return (0);
}

int		ft_what_case(int is_c00, int is_c01, int is_c02, int is_c03, int is_c04)
{
	if (is_c02 == 1 && is_c03 == 1 && is_c04 == 1)
		return (9);
	if (is_c02 == 1 && is_c03 == 1)
		return (6);
	if (is_c02 == 1 && is_c04 == 1)
		return (7);
	if (is_c03 == 1 && is_c04 == 1)
		return (8);
	if (is_c00 == 1)
		return (1);
	if (is_c01 == 1)
		return (2);
	if (is_c02 == 1)
		return (3);
	if (is_c03 == 1)
		return (4);
	if (is_c04 == 1)
		return (5);
	return (0);
}

int		ft_check_all(char *str, int x, int y)
{
	int		is_c00;
	int		is_c01;
	int		is_c02;
	int		is_c03;
	int		is_c04;

	if (ft_strcmp(str, gen_colle_00(x, y)) == 0)
		is_c00 = 1;
	else
		is_c00 = 0;
	if (ft_strcmp(str, gen_colle_01(x, y)) == 0)
		is_c01 = 1;
	else
		is_c01 = 0;
	is_c02 = ft_check_c02(str, x, y);
	is_c03 = ft_check_c03(str, x, y);
	is_c04 = ft_check_c04(str, x, y);
	return (ft_what_case(is_c00, is_c01, is_c02, is_c03, is_c04));
}
