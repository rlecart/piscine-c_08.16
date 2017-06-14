/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 13:16:38 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/25 23:22:10 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src, int j)
{
	char			*dest;
	int				i;

	i = 0;
	dest = (char*)malloc(sizeof(char) * (j + 1));
	while (i <= j)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*param_struct;
	int				i;
	int				j;
	int				bonjour;

	i = 0;
	j = 0;
	bonjour = 0;
	if (ac < 2)
		return (0);
	if (!(param_struct = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		while (av[i][j])
			j++;
		param_struct[i].size_param = j;
		param_struct[i].str = av[i];
		param_struct[i].copy = ft_strdup(av[i], j);
		param_struct[i].tab = ft_split_whitespaces(av[i]);
		j = 0;
		i++;
	}
	param_struct[i].str = NULL;
	return (param_struct);
}
