/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaubres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:34:14 by nlaubres          #+#    #+#             */
/*   Updated: 2016/08/09 17:16:42 by nlaubres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		a;

	a = 0;
	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0')
			return (0);
		a++;
	}
	return (s1[a] - s2[a]);
}
