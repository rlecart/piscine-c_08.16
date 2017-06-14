/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 18:25:22 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/09 17:15:01 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	char	*a;
	char	*b;
	int		temp;
	int		nbrchar;

	nbrchar = ft_strlen(str);
	a = &str[0];
	b = &str[nbrchar] - 1;
	while (a < b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		a++;
		b--;
	}
	return (str);
}
