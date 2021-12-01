/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:57:31 by slucas            #+#    #+#             */
/*   Updated: 2021/11/14 22:57:38 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int ta;
	int tb;
	int *a;
	int *b;
	
	ta = 10;
	tb = 6;
	a = &ta;
	b = &tb;

	printf("%d %d %d %d\n", ta, tb, *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("%d %d %d %d\n", ta, tb, *a, *b);
	return 0;
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	/*
	int temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
	*/

	int ta;
	int tb;

	ta = *a;
	tb = *b;
	*a = ta / tb;
	*b = ta % tb;
}
