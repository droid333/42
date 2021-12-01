/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:50:52 by slucas            #+#    #+#             */
/*   Updated: 2021/11/17 21:53:01 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char tab[100];
	char s1[] = "tbgjtdsvsdvu";
	char s2[] = "TODFGHGHDHGGDGDGGHGTO";
	ft_strcat(tab, s1);
	ft_strcat(tab, s2);
//	strcat(dest, src);
	printf("%s", tab);
	return 0;
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
//	printf("%s", dest);
	return (dest);
}
