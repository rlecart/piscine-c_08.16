/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:47:31 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/12 16:48:17 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if ((base % 2) == 0)
		base = base / 2;
	else
		base = (base * 3) + 1;
	return (ft_collatz_conjecture(base) + 1);
}
