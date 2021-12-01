/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 09:55:14 by tbraquem          #+#    #+#             */
/*   Updated: 2021/11/27 10:08:18 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_atoi(char *str);

char	*ft_atoi(char *str)
{
	int	i;
	char *ret;

	i = 0;
	while (str[i] && (str[i] >= '0' && *str <= '9'))
	{
		ret[i] = str[i]; 
		i++;
	}
	return (ret);
}

#include <stdio.h>

int	main(void)
{
	char *array;
	array = ft_atoi("70 : seventy");
	printf("%s\n", array);
	return (0);
}
