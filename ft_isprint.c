/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proiz <proiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 23:52:14 by proiz             #+#    #+#             */
/*   Updated: 2021/11/29 20:37:24 by proiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
isprint function is called to check 
whether the passed character is printable or not
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
