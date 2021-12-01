/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:06:28 by tbraquem          #+#    #+#             */
/*   Updated: 2021/11/28 19:17:05 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char **argv)
{
	char	*res;
	char	*result;

	res = RESPONSE;
	result = NULL;
	result = ft_response(res);
	argv[1] = result;
	if (argc > 1)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr(NORESP);
		ft_putchar('\n');
	}
	free(result);
	return (0);
}
