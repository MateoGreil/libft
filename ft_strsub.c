/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:33:58 by mgreil            #+#    #+#             */
/*   Updated: 2017/11/08 13:51:05 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	if ((new = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	s += start;
	i = 0;
	while (i < len)
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}
