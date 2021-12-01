/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:01:40 by slucas            #+#    #+#             */
/*   Updated: 2021/11/29 12:57:25 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	diff = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	*range = malloc(sizeof(**range) * diff);
	if (!(*range))
		return (-1);
	i = 0;
	while (i < diff)
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (diff);
}
