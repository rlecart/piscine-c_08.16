/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 20:20:18 by cpoulet           #+#    #+#             */
/*   Updated: 2016/08/14 22:04:47 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_l(char **tab, int lig, int col, char nb)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (tab[lig][j] == nb && j != col && nb != '.')
			return (1);
		j++;
	}
	return (0);
}

int		ft_check_c(char **tab, int lig, int col, char nb)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][col] == nb && i != lig && nb != '.')
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_square(char **tab, int lig, int col, char nb)
{
	int l;
	int c;
	int x;
	int y;

	l = 0;
	c = 0;
	x = lig - lig % 3;
	y = col - col % 3;
	while (l < 3)
	{
		c = 0;
		while (c < 3)
		{
			if (tab[l + x][c + y] == nb && nb != '.')
			{
				if (lig != (l + x) || col != (c + y))
					return (1);
			}
			c++;
		}
		l++;
	}
	return (0);
}

int		ft_3check(char **tab, int i, int j, char nb)
{
	if ((ft_check_l(tab, i, j, nb) == 0) && (ft_check_c(tab, i, j, nb) == 0)
			&& (ft_check_square(tab, i, j, nb) == 0))
		return (0);
	else
		return (1);
}
