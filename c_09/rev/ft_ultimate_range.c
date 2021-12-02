/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:48:13 by slucas            #+#    #+#             */
/*   Updated: 2021/12/02 13:26:30 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int min = 20;
	int max = 35;
	int *range;
	int i = 0;

	int test = ft_ultimate_range(&range, min, max);
	
	printf("%d\n", test);
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}

	return (0);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(**range) * (max - min));
	if (!(*range))
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (i);
}
