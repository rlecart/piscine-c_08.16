/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 18:48:40 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/10 19:16:31 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		resultat;

	resultat = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
