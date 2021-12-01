/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:08:55 by tbraquem          #+#    #+#             */
/*   Updated: 2021/11/28 17:45:25 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_read_dict(void)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	char	c;
	int		i;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	i = 0;
	while (read(fd, &c, 1) == 1)
	{
		buf[i] = c;
		i++;
	}
	buf[i] = '\0';
	split_string_line(buf);
	if (close(fd) == -1)
	{
		ft_putstr("File Close Error\n");
		return (1);
	}
	return (0);
}

char	**split_string_line(char *str)
{
	char	**array;

	array = NULL;
	array = (char **)malloc(sizeof(char *) * (line_count(str)));
	if (array == NULL)
	{
		ft_putstr("Malloc error\n");
		return (array);
	}
	malloc_2d_array(str, array);
	copy_array(str, array);
	ft_atoi(array, line_count(str));
	return (array);
}

void	malloc_2d_array(char *file, char **array)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (file[i])
	{
		if (file[i] == '\n')
		{
			array[j] = (char *)malloc(sizeof(char *) * k);
			j++;
			k = 0;
		}
		i++;
		k++;
	}
}

void	copy_array(char	*file, char **array)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (file[i])
	{
		if (file[i] != '\n')
		{
			array[j][k] = file[i];
			k++;
			array[j][k] = '\0';
		}
		else
		{
			k = 0;
			j++;
		}
		i++;
	}
}

int	line_count(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			counter++;
		i++;
	}
	return (counter);
}
