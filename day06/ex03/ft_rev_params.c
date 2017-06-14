/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 18:56:08 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/19 02:09:52 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = argc - 1;
	while (i != 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
			if (argv[i][j] == '\0')
				ft_putchar('\n');
		}
		i--;
	}
	return (0);
}
