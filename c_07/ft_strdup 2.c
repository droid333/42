/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:33:20 by slucas            #+#    #+#             */
/*   Updated: 2021/11/24 20:43:56 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main()
{
	char	src[] = "Bonjour les gens comment ca va ?";
	char	*test;

	test = ft_strdup(src);
	printf("moooooa: %s", test);
	free(test);
	return (0);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*ptr;

	size = 0;
	while (src[size])
		size++;
	if (!(ptr = (char *)malloc(sizeof(*src) * (size + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
