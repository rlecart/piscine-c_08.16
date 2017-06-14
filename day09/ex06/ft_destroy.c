/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 03:15:14 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/12 03:40:22 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	free(factory);
}

int		main(void)
{
	char	*c;
	char	**b;
	char	***a;
	char	bonjour;

	a = &b;
	b = &c;
	c = &bonjour;
	bonjour = 'a';
	malloc(
	printf("%c\n", bonjour);
	ft_destroy(a);
	printf("%c\n", bonjour);
	return (0);
}
