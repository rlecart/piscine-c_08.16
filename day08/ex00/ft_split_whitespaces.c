/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 15:35:57 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/24 15:36:27 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		nbrchar;
	int		i;

	nbrchar = 0;
	i = 0;
	while (str[i++] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		nbrchar++;
	}
	return (nbrchar);
}

int		ft_nbrword(char *str)
{
	int		i;
	int		nbrword;

	i = 0;
	nbrword = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				&& ((str[i + 1] == ' ' || str[i + 1] == '\t'
						|| str[i + 1] == '\n') && (str[i + 1] != '\0')))
			nbrword++;
		i++;
	}
	return (nbrword);
}

char	**ft_result(char **str_result, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			str_result[j][k++] = str[i++];
			if ((str[i + 1] == ' ' || str[i + 1] == '\t'
						|| str[i + 1] == '\n') && (str[i + 1] != '\0'))
			{
				str_result[j][k] = str[i++];
				str_result[j++][++k] = '\0';
				k = 0;
			}
		}
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}
	str_result[ft_nbrword(str) + 1] = 0;
	return (str_result);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**str_result;

	i = 0;
	if (!(str_result = (char**)malloc(sizeof(char) * ft_nbrword(str) + 1)))
		return (0);
	while ((i - 1) <= ft_nbrword(str))
	{
		if (!(str_result[i] = (char*)malloc(sizeof(char) * ft_strlen(str) + 1)))
			return (0);
		i++;
	}
	str_result = ft_result(str_result, str);
	return (str_result);
}
