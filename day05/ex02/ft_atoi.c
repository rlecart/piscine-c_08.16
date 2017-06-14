/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 17:58:04 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/17 06:27:28 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		isneg;
	int		result;

	result = 0;
	i = 0;
	isneg = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		isneg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (isneg == 1)
		result = result * -1;
	return (result);
}
