/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:40:51 by yamajid           #+#    #+#             */
/*   Updated: 2022/11/16 23:00:52 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	dstsize -= 1;
	while ((*src != '\0') && (dstsize > 0))
	{
		*dst ++ = *src ++;
		dstsize --;
	}
	*dst = '\0';
	return (srcsize);
}
