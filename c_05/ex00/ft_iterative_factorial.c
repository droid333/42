/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:36:16 by slucas            #+#    #+#             */
/*   Updated: 2021/11/28 19:38:35 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb > 0)
	{
		while (nb > 1)
		{
			fact = fact * nb;
			nb--;
		}
		return (fact);
	}
	else if (nb == 0 || nb == 1)
		return (1);
	return (0);
}
