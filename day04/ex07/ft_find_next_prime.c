/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 06:19:59 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/14 17:26:42 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;
	int		nbdiv;

	i = 1;
	nbdiv = 0;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nbdiv > 1)
			return (0);
		if (nb % i == 0)
		{
			nbdiv++;
			i++;
		}
		else
			i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
	{
		ft_is_prime(nb);
		nb++;
	}
	return (nb);
}
