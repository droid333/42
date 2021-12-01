/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:16:42 by slucas            #+#    #+#             */
/*   Updated: 2021/11/14 19:45:11 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int tutu;
	int toto;
	int *ptr1;
	int *ptr2;

	tutu = 4;
	toto = 2;
	ptr1 = &tutu;
	ptr2 = &toto;

	printf("tutu: %p --- %d\n", &tutu, tutu);
	printf("toto: %p --- %d\n", &toto, toto);

	ft_swap(ptr1, ptr2);

	printf("tutu: %p --- %d\n", &tutu, tutu);
	printf("toto: %p --- %d\n", &toto, toto);
	return 0;
}

void	ft_swap(int *a, int *b)
{	
	//int c;

	printf("a: %p --- %d\n", &a, *a);
	printf("b: %p --- %d\n", &b, *b);
	/*
	c = *b;
	*b = *a;
	*a = c;
	*/
	
	int t;
	int *c;

	t = 0;
	c = &t;

	*c = *b;
	*b = *a;
	*a = *c;

	printf("a: %p --- %d\n", &a, *a);
	printf("b: %p --- %d\n", &b, *b);
}
