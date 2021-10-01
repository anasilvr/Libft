/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:33:28 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/01 16:34:58 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copies n bytes from src to dst using a temp array to handle overlap.
Return: original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char *str_dst;
	unsigned char	*str_src;

	i = 0;
	str_dst = (unsigned char *)dst;
	str_src = (unsigned char*)src;
	if (dst == 0 && src == 0)
		return (NULL);
	if (str_dst > str_src)
	{
		while (n > 0)
		{
			str_dst[n] = str_src[n];
			n--;
		}
	}
	else
		while (i < n)
		{
			str_dst[i] = str_src[i];
			i++;
		}
	return (str_dst);
}
