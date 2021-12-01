/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:45:55 by slucas            #+#    #+#             */
/*   Updated: 2021/11/28 19:13:20 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FCT_H

# define FT_FCT_H
#include <stdlib.h>
#include <unistd.h>

# define LENGTH 42
# define NORESP "¯\\_(ツ)_/¯"
# define RESPONSE "forty two"

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_response(char *str);

#endif
