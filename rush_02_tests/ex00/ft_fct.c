/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:40:42 by slucas            #+#    #+#             */
/*   Updated: 2021/11/28 18:44:13 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fct.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char    *ft_response(char *str)
{
    char    *ptr;
    int        i;

    ptr = malloc(sizeof(*ptr) * (LENGTH + 1));
    i = 0;
    while (str[i])
    {
        ptr[i] = str[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
