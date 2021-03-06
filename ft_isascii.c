/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proiz <proiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:46:16 by proiz             #+#    #+#             */
/*   Updated: 2021/11/29 21:37:54 by proiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isascii function checks the passed value is ASCII character or not*/

int	ft_isascii(int c)
{
	return (c <= 127 && c >= 0);
}
