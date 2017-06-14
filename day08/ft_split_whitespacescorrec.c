/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 22:09:04 by pbernier          #+#    #+#             */
/*   Updated: 2016/08/25 00:57:04 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	static int		len;

	while (str[len] != 0)
		len++;
	return (len);
}

int		ft_space(int i, char *str)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char			**tab;
	int					i;
	int					j;
	int					k;
	int					len;

	j = 0;
	k = 0;
	i = ft_space(0, str);
	tab = (char **)malloc(sizeof(char *) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		len = i;
		while (str[i] != ' ' && str[i] != 0 && str[i] != '\t' && str[i] != '\n')
			i++;
		len = i - len;
		i = i - len;
		tab[k] = (char *)malloc(sizeof(char) * (len + 1));
		while (len--)
			tab[k][j++] = str[i++];
		tab[k++][j] = '\0';
		j = 0;
		i = ft_space(i, str);
	}
	tab[k] = (char *)malloc(sizeof(char *) * 1);
	tab[k] = 0;
	return (tab);
}
