/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_planB.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:55:05 by slucas            #+#    #+#             */
/*   Updated: 2021/11/28 19:05:35 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fct.h"

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
