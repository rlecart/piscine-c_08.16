/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 23:49:24 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/24 22:14:47 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		i;

	i = 0;
	if (tab == 0)
		return ;
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
