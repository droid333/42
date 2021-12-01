/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:10:39 by slucas            #+#    #+#             */
/*   Updated: 2021/11/18 18:45:46 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "bonjour";
	char	to_find[] = "";
	ft_strstr(str, to_find);
	printf("%s\n", ft_strstr(str, to_find));
	return 0;
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	//char	*p;
	int     x;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		//p = &str[i];
		x = i;
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
                //return (p);
                return (&str[x]);
			}
			i++;
			j++;
		}
		j = 0;
		//i = x; // i = x + 1, caracter dapres mais incremente aprs avec i++
		i++;
	}
	return (0x0);
}
