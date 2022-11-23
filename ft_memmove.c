/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:43:29 by yamajid           #+#    #+#             */
/*   Updated: 2022/11/17 00:03:03 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst1;
	const char	*src1;

	dst1 = dst;
	src1 = src;
	if (dst1 == NULL && src1 == NULL)
		return (NULL);
	if (src1 < dst1)
	{
		while (len--)
		dst1[len] = src1[len];
	}
	else
	{
		ft_memcpy(dst1, src1, len);
	}
	return ((void *)dst);
}
