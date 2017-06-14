/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 14:50:43 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/12 16:42:41 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int		a_swap;
	int		b_swap;
	int		c_swap;
	int		d_swap;

	a_swap = ***a;
	b_swap = *b;
	c_swap = *******c;
	d_swap = ****d;
	***a = b_swap;
	*b = d_swap;
	*******c = a_swap;
	****d = c_swap;
}
