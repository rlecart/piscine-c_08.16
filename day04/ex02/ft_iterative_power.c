/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 15:49:33 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/10 18:41:13 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		resultat;

	resultat = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		resultat = resultat * nb;
		power--;
	}
	return (resultat);
}
