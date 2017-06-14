/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 18:45:48 by rlecart           #+#    #+#             */
/*   Updated: 2016/08/11 21:40:53 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_convert(int hour)
{
	if (hour == 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("11.00 A.M AND 12.00 P.M.\n");
	}
	else if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("12.00 P.M AND 1.00 P.M.\n");
	}
	else if (hour == 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("11.00 P.M AND 12.00 A.M.\n");
	}
	else if (hour == 24 || hour == 0)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("12.00 A.M AND 1.00 A.M.\n");
	}
}

void	ft_takes_place(int hour)
{
	int		x;
	int		y;

	if (hour < 11 && hour >= 1)
	{
		x = hour;
		y = x + 1;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 A.M AND %d.00 A.M.\n", x, y);
	}
	else if (hour >= 12 && hour < 23)
	{
		x = hour - 12;
		y = x + 1;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 A.M AND %d.00 A.M.\n", x, y);
	}
	else
		ft_convert(hour);
}
