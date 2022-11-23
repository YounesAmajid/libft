/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:40:03 by yamajid           #+#    #+#             */
/*   Updated: 2022/11/16 23:49:14 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	j;
	int				i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	j = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (s1[i] == j)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
