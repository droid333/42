/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:14:39 by slucas            #+#    #+#             */
/*   Updated: 2021/12/01 00:02:53 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include <unistd.h>
//#include "ft_stock_str.h"

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;

# define ps(x) printf("%s\n", x);
# define pd(x) printf("%d\n", x);
# define tutu printf("¯\\_(⊙︿⊙)_/¯\n");

struct	s_stock_str *ft_strs_to_tab(int ac, char **av);

void	ft_show_tab(struct s_stock_str *par);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (i < str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		size;
	char	*ptr;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	ptr = malloc(sizeof(*ptr) * size + 1);
	if (!ptr)
		return (NULL);
	while(str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main(void)
{
	int		ac = 3;
	char	*av[] = {"un", "deux", "trois"};
	
	//int i = 0;
	t_stock_str *test;

	test = ft_strs_to_tab(ac, av);
	//ft_strs_to_tab(ac, av);
	ft_show_tab(test);
	//tutu
	return (0);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str *Stock;
	
	Stock = malloc(sizeof(*Stock) * (ac + 1));
	if (!Stock)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		Stock[i].size = ft_strlen(av[i]);
		Stock[i].str = av[i];
		Stock[i].copy = ft_strdup(av[i]);
		i++;
	}
//	Stock[i].size = 0;
	Stock[i].str = 0;
//	Stock[i].copy = 0;
	return (Stock);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchar('0' + nbr);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy); // -> ?
		ft_putchar('\n');
		i++;
	}
}
