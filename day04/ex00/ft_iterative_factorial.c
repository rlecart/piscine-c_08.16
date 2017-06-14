/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 17:34:24 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/15 15:37:58 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		facto;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1 && nb < 13)
	{
		facto = nb;
		while (nb != 1)
		{
			facto = facto * (nb - 1);
			nb--;
		}
		return (facto);
	}
	else
	{
		return (0);
	}
}
