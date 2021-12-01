/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:28:20 by slucas            #+#    #+#             */
/*   Updated: 2021/11/15 20:46:18 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}
