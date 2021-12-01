/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:10:39 by slucas            #+#    #+#             */
/*   Updated: 2021/11/24 12:43:53 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		x = i;
		if (str[i] == to_find[0])
		{		
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[x]);
				j++;
			}
		}
		i++;
	}
	return (0x0);
}
