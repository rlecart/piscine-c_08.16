/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 17:23:58 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/22 02:18:31 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		a;
	int		i;
	int		j;
	char	*tab;

	a = 0;
	i = -1;
	while (++i < argc)
		a = a + ft_strlen(argv[i]) + 1;
	a--;
	tab = (char*)malloc(sizeof(char) * (a + 1));
	i = 0;
	a = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			tab[a + j] = argv[i][j];
		tab[a + j] = '\n';
		if (i != argc - 1)
			j++;
		a = a + j;
	}
	tab[a] = '\0';
	return (tab);
}
