/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 03:07:43 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/18 17:56:52 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) && (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		if ((str[i] >= 'a' && str[i] <= 'z')
					&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
					&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))
			str[i] = str[i] - 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z')
					&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
					&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))
			str[i] = str[i] - 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
