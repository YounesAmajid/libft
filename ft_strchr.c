/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:04:27 by yamajid           #+#    #+#             */
/*   Updated: 2022/11/15 19:16:38 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	if ((char) c == '\0')
		return (&s1[ft_strlen(s)]);
	i = 0;
	while (s1[i])
	{
		if (s1[i] == (char) c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
