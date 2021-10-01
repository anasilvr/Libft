/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:51:59 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/01 15:14:57 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Appends string src to the end of dst.
It will then NUL-terminate, unless dstsize is 0 or
the original dst string was longer than dstsize
If the src and dst strings overlap, the behavior is undefined.
Return: initial length of dst plus the length of src.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	int		i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (srclen);
	if (size < dstlen)
		srclen += size;
	else
		srclen += dstlen;
	while (src[i] != '\0' && ((dstlen + i) < (size - 1)))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen);
}
