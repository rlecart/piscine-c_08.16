/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:43:31 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/18 23:11:25 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb < 0)
		{
			if (nb == -2147483648)
				return (ft_putstr("-2147483648"));
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb <= 9)
			ft_putchar(nb + '0');
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
