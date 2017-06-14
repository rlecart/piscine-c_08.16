/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 23:23:52 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/12 16:49:05 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bouton(int i, int j, int k)
{
	if (i > j && j > k)
		return (j);
	else if (k > j && j > i)
		return (j);
	else if (i > k && k > j)
		return (k);
	else if (j > k && k > i)
		return (k);
	else if (k > i && i > j)
		return (i);
	else if (j > i && i > k)
		return (i);
	else
		return (0);
}
