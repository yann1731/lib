/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:33:06 by yst-laur          #+#    #+#             */
/*   Updated: 2021/09/24 10:33:09 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/libft.h"

int	ft_strnstrint(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	i = 0;
	j = 0;
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return (0);
	while (haystack[i] && i <= len)
	{
		if (haystack[i + j] == needle[j])
		{
			while (haystack[i + j] == needle[j] && (i + j) < len)
			{
				if (j == nlen - 1)
					return (1);
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (0);
}
