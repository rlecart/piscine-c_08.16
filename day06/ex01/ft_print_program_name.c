/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 21:14:12 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/19 02:09:28 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (argc >= 1)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		if (argv[i][j] == '\0')
			ft_putchar('\n');
	}
	return (0);
}
