/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:31:46 by anarodri          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/11 14:41:50 by anarodri         ###   ########.fr       */
=======
/*   Updated: 2021/11/15 16:25:01 by anarodri         ###   ########.fr       */
>>>>>>> 88cffdb5dd4060f617b1e7431b9546732f9d6ec9
/*                                                                            */
/* ************************************************************************** */

/* Alphanumeric character test.
Tests for any character for which ft_isalpha or ft_isdigit is true.
The value of the argument must be representable as:
an unsigned char or the value of EOF.
*/

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha (c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

int main (void)
{
	printf("Is '%c' alnum? : %d\n", 101, ft_isalnum(101));
	printf("Is '%c' alnum? : %d\n", 54, ft_isalnum(54));
	printf("Is '%c' alnum? : %d\n", -4, ft_isalnum(-4));
	printf("Is '%c' alnum? : %d\n\n", 32, ft_isalnum(32));
}