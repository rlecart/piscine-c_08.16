/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 03:42:25 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/24 22:14:49 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nbword(char *str)
{
	int i;
	int j;
	int counter;

	i = 0;
	j = 0;
	counter = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
		{
			i++;
			j = 1;
		}
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\0' || str[i] == ' ')
		{
			counter += (j == 1) ? 1 : 0;
			j = 0;
			i++;
		}
	}
	return (counter);
}

int		ft_nbltr(char *str, int i)
{
	int counter;

	counter = 0;
	while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
	{
		counter++;
		i++;
	}
	return (counter);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(char*) * (ft_nbword(str)))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((tab[j] = malloc(sizeof(char) * ft_nbltr(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
				tab[j][k++] = str[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}
