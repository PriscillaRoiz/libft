/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proiz <proiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 00:11:04 by proiz             #+#    #+#             */
/*   Updated: 2021/11/29 21:45:06 by proiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strlen function computes the length of the given string 
size_t ft_strlen(const char *c, int *len)
{
	for (*len = 0; c[*len]; (*len)++);
}
len pointer equal zero to roam the beginning of the string
char c count until not get the null character*/

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
