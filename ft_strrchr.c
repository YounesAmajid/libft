/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:08:22 by yamajid           #+#    #+#             */
/*   Updated: 2022/11/15 19:17:28 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;
	char	*s;
	char	j;

	s = (char *)str;
	if ((char) c == '\0')
		return (s + ft_strlen(s));
	j = (char)c;
	len = ft_strlen(str);
	while (len--)
	{
		if (s[len] == j)
			return (&s[len]);
	}
	return (NULL);
}
