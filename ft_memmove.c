/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:55:31 by mgreil            #+#    #+#             */
/*   Updated: 2017/11/08 10:36:29 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if ((tmp = (char*)malloc(sizeof(char) * n + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char*)tmp)[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char*)dest)[i] = ((char*)tmp)[i];
		i++;
	}
	return (dest);
}
