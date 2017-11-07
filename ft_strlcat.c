/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:34:31 by nsayer            #+#    #+#             */
/*   Updated: 2017/11/07 17:50:57 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t destlen;
	size_t srclen;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	destlen = i;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (size <= destlen)
		return (srclen + size);
	return (destlen + srclen);
}
