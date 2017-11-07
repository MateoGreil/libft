/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:41:00 by mgreil            #+#    #+#             */
/*   Updated: 2017/11/07 15:54:59 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((int*)src)[i] != c)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	if (((int*)src)[i] == c)
	{
		((char*)dest)[i] = ((char*)src)[i];
		return (dest + i + 1);
	}
	return (NULL);
}
