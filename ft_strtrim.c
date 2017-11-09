/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:01:42 by mgreil            #+#    #+#             */
/*   Updated: 2017/11/09 11:02:27 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	lens;
	unsigned int	wsstart;
	unsigned int	wsend;
	unsigned int	i;
	char			*new;

	lens = 0;
	lens = ft_strlen(s);
	wsstart = 0;
	while (s[wsstart] == ' ' || s[wsstart] == '\n' || s[wsstart] == '\t')
		wsstart++;
	wsend = 0;
	while (s[lens - wsend - 1] == ' ' || s[lens - wsend - 1] == '\n' ||
			s[lens - wsend - 1] == '\t')
		wsend++;
	if ((new = (char*)malloc(sizeof(char) * (lens - wsstart - wsend))) == NULL)
		return (NULL);
	i = 0;
	while (i < lens - wsstart - wsend)
	{
		new[i]  = s[wsstart + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
