/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaubres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 11:48:21 by nlaubres          #+#    #+#             */
/*   Updated: 2016/08/21 21:17:31 by nlaubres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		TOOLS_H
# define	TOOLS_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# define BS 65536

void	ft_sort_ascii_table(char **argv);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_check_all(char *str, int x, int y);
void	ft_putnbr(int nb);
void	ft_print_sol(int i, int x, int y);
char	*gen_colle_00(int x, int y);
char	*gen_colle_01(int x, int y);
char	*gen_colle_02(int x, int y);
char	*gen_colle_03(int x, int y);
char	*gen_colle_04(int x, int y);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	doline(int x, char l[], char *str, int *i);
void	ft_print_sol(int i, int x, int y);

#endif



















