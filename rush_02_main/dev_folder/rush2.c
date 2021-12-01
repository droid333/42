/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:01:58 by slucas            #+#    #+#             */
/*   Updated: 2021/11/27 12:30:40 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


typedef struct	s_line
{
	int	key;
	char *data;
}				s_num;

int	ft_atoi(char *str, struct s_num);

int	main(void) // argc/argv
{
	return (0);
}

// putnbr
// tableau de structure ?

void	ft_atoi(char *str, struct s_num) // void ?
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ':')
		{
			s_num.key = s_num.key * 10 + (str[i] - '0');
			i++;
		}
		i++;
		while (str[i] != '\n')
		{
			s_num.data += str[i];
			i++;
		}
		// ? i++; 
	}
}
