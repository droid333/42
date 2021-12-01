/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:33:20 by slucas            #+#    #+#             */
/*   Updated: 2021/11/24 18:32:03 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main()
{
	char	src[] = "tutuitlthlfgnhlngdhnlg";
	char *test;
	test = ft_strdup(src);

	free(test);
	return (0);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	//ptr = NULL;
	ptr = (char *)malloc(sizeof(*src));
	if (ptr == NULL) // a voir
	{
		printf("erreur malloc\n");
		return (src);
	}
	
	while (src[i] != '\0')
	{	
		//*ptr = *src;
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';

	printf("adresse de ptr: %p\n", ptr);
	printf("valeur a ladresse pointee par ptr: %s\n", ptr);
	
	return (ptr);
}
