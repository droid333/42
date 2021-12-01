/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:55:52 by slucas            #+#    #+#             */
/*   Updated: 2021/11/14 20:48:23 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int res;
	int rest;
	int *div;
	int *mod;

	a = 10;
	b = 5;
	res = a / b;
	rest = a % b;
	div = &res;
	mod = &rest;

	ft_div_mod(a, b, div, mod);
	printf("%d %d %d %d\n", a, b, *div, *mod);
	return 0;
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
