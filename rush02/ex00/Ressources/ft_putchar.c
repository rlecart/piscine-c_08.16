/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaubres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 07:56:05 by nlaubres          #+#    #+#             */
/*   Updated: 2016/08/20 11:51:04 by nlaubres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
