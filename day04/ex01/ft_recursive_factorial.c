/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 00:27:55 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/14 17:26:48 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1 && nb < 13)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	else
	{
		return (0);
	}
	return (nb);
}
