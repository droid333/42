/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:05:39 by tbraquem          #+#    #+#             */
/*   Updated: 2021/11/28 19:26:41 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_atoi(char **str, int size);
void	malloc_array(char **src, char **dest, int line);

void	ft_atoi(char **str, int size)
{
	int		i;
	int		j;
	int		k;
	char	**digit;
	char	**letters;

	i = 0;
	j = 0;
	k = 0;
	digit = malloc(sizeof(char) * size);
	letters = malloc(sizeof(char) * size);
	malloc_array(str, digit, size);
	malloc_array(str, letters, size);
	free(digit);
	free(letters);
	free(str);
}
/*
while (i < size)
	{
		while (str[i][j])
		{
			if (str[i][j] >= '0' && str[i][j] <= '9')
			{
				digit[i][j] = str[i][j];
				digit[i][j + 1] = '\0';
			}
			else if ((str[i][j] >= 'a' && str[i][j] <= 'z') ||
					(str[i][j] >= 'A' && str[i][j] <= 'Z'))
			{
				letters[i][k] = str[i][j];
				letters[i][k + 1] = '\0';
				k++;
			}
			j++;
		}
		j = 0;
		i++;
		k = 0;
	}
*/

void	malloc_array(char **src, char **dest, int line)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < line)
	{
		while (src[i][j])
			j++;
		dest[i] = (char *)malloc(sizeof(char) * j);
		j = 0;
		i++;
	}
}
