/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 23:01:51 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/23 22:49:01 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

# define COLLE0 "[colle-00]"
# define COLLE1 "[colle-01]"
# define COLLE2 "[colle-02]"
# define COLLE3 "[colle-03]"
# define COLLE4 "[colle-04]"

# define TMPSIZE 1000
# define BUFFSIZE 2000000000

void	ft_number(long nb);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*no_newline(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		rush(char *buff, int size);
int		firstcases(int *iscol, int ligne, int col);
int		multicases(int *iscol, int ligne, int col);
int		lastcases(int *iscol, int ligne, int col);
int		is_colle00(char *buff, int ligne, int col);
char	*colle00(int x, int y);
void	ligne00(char *buff, int i, int x, int y);
int		is_colle01(char *buff, int ligne, int col);
char	*colle01(int x, int y);
void	ligne01(char *buff, int i, int x, int y);
int		is_colle02(char *buff, int ligne, int col);
char	*colle02(int x, int y);
void	ligne02(char *buff, int i, int x, int y);
int		is_colle03(char *buff, int ligne, int col);
char	*colle03(int x, int y);
void	ligne03(char *buff, int i, int x, int y);
int		is_colle04(char *buff, int ligne, int col);
char	*colle04(int x, int y);
void	ligne04(char *buff, int i, int x, int y);
void	dimensions(char *buff, int size, int *l, int *c);
int		show_result(char *str, int ligne, int col);

#endif
