/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:41:00 by mgreil            #+#    #+#             */
/*   Updated: 2017/11/08 11:03:27 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char*)src)[i] == (unsigned char)c)
		{
			((char*)dest)[i] = ((char*)src)[i];
			return (dest + i + 1);
		}
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	return (NULL);
}
