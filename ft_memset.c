/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proiz <proiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:55:15 by proiz             #+#    #+#             */
/*   Updated: 2021/08/06 23:38:36 by proiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = (unsigned char )c;
	return(*s);
}

/*
memset	fill a byte string with a byte value

*/