/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:58:00 by tbraquem          #+#    #+#             */
/*   Updated: 2021/11/28 19:28:54 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# define LENGTH 42
# define NORESP "¯\\_(ツ)_/¯"
# define RESPONSE "forty two"
# define BUF_SIZE 691

typedef struct nb
{
	char	*key;
	char	*data;
}t_nb;
int		ft_read_dict(void);
int		line_count(char *str);
char	**split_string_line(char *str);
void	copy_array(char *file, char **array);
void	malloc_2d_array(char *file, char **array);
void	ft_putstr(char *str);
void	ft_atoi(char **str, int size);
char	*ft_response(char *str);
void	ft_putchar(char c);
#endif
