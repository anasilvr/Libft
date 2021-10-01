/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:44:52 by anarodri          #+#    #+#             */
/*   Updated: 2021/09/28 15:47:08 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Contiguously allocates memory that is filled with bytes of value zero.
To avoid a memory leak, the returned pointer must be deallocated with:
free() or realloc().

Returns: Pointer to the beginning of newly allocated memory,
NULL if there is an error.
*/

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	if (num == 0 || size == 0)
		return (malloc(0));
	ft_memset(ptr, 0, (num * size));
	return (ptr);
}
