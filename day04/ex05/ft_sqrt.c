/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 20:31:52 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/13 13:09:24 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		comp;

	comp = 0;
	while (comp * comp != nb && comp * comp < nb && comp * comp >= 0)
		comp++;
	if (comp * comp == nb)
		return (comp);
	else
		return (0);
}
