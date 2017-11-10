/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:34:31 by nsayer            #+#    #+#             */
/*   Updated: 2017/11/10 15:33:27 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t destlen;
	size_t srclen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	i = destlen;
	if (size > 0)
	{
		while (src[j] != '\0' && i < (size - 1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (srclen + size);
	return (destlen + srclen);
}
