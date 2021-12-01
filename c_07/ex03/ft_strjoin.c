/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:00:03 by slucas            #+#    #+#             */
/*   Updated: 2021/11/29 20:31:06 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_size(int size, char **strs)
{
	int	s_size;
	int	i;
	int	j;

	s_size = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			s_size++;
			j++;
		}
		i++;
		j = 0;
	}
	return (s_size);
}

int	ft_sep_size(int size, char *sep)
{
	int	s_size;
	int	i;

	s_size = 0;
	i = 0;
	while (sep[i])
	{
		s_size++;
		i++;
	}
	if (size > 0)
		return (s_size * (size - 1));
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		str_f_size;
	int		sep_f_size;

	res = NULL;
	str_f_size = ft_str_size(size, strs);
	sep_f_size = ft_sep_size(size, sep);
    //printf("%s\n", *strs);
    if (size == 0 || *strs[0] == 0)
	{
		res = malloc(sizeof(char));
		*res = 0;
		return (res);
	}
	if (size > 0)
		res = malloc(sizeof(**strs) * ((str_f_size + sep_f_size) + 1));
	res = ft_strcat(res, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(res, sep);
		ft_strcat(res, strs[i]);
		i++;
	}
	return (res);
}

