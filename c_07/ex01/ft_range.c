/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:02:46 by slucas            #+#    #+#             */
/*   Updated: 2021/12/01 01:15:07 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	diff;
	int	i;

	diff = 0;
	if (min >= max)
		return (NULL);
	diff = (max - min);
	tab = malloc(sizeof(*tab) * diff);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < diff)
	{
		tab[i] = (min + i);
		i++;
	}
	return (tab);
}
