/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 15:26:49 by cpoulet           #+#    #+#             */
/*   Updated: 2016/08/14 23:43:10 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "check.h"

int		ft_checkall(char **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (ft_3check(tab, i, j, tab[i][j]) == 0)
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int		ft_resolution(char **tab, int pos)
{
	if (**tab == 1)
		pos = 0;
	return (0);
}

void	ft_display(char **tab)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &tab[i][j], 1);
			if (j != 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		ft_cpytab(char **argv, char **sudoku)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j <= 8)
		{
			if (argv[i][j] == '.' || (argv[i][j] > '0' && argv[i][j] <= '9'))
			{
				sudoku[i - 1][j] = argv[i][j];
			}
			else
				return (write(1, "Erreur\n", 7));
			j++;
		}
		if (argv[i][j] != '\0')
			return (write(1, "Erreur\n", 7));
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	**sudoku;

	i = 0;
	sudoku = (char**)malloc(sizeof(*sudoku) * 10);
	while (i++ <= 9)
		sudoku[i - 1] = (char*)malloc(sizeof(*sudoku) * 10);
	if (argc != 10)
		return (write(1, "Erreur\n", 7));
	ft_cpytab(argv, sudoku);
	ft_display(sudoku);
	write(1, "\n", 1);
	if (ft_checkall(sudoku) == 1)
		return (write(1, "Erreur\n", 7));
	if (ft_resolution(sudoku, 0) == 1)
		ft_display(sudoku);
	else
	{
		ft_display(sudoku);
		return (write(1, "Erreur\n", 7));
	}
	return (0);
}
