/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:54:16 by anarodri          #+#    #+#             */
/*   Updated: 2021/10/06 15:36:28 by anarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a substring from the string "s".
** The substring begins at index "start" and is of maximum size "len".
** Return: the substring created, NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (substr == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
