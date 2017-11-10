/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:01:42 by mgreil            #+#    #+#             */
/*   Updated: 2017/11/10 16:17:16 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_ws_start(char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static int	count_ws_end(char const *s, unsigned int lens)
{
	unsigned int	i;

	lens--;
	i = 0;
	while (s[lens - i] == ' ' || s[lens - i] == '\n' || s[lens - i] == '\t')
		i++;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	lens;
	unsigned int	wsstart;
	unsigned int	wsend;
	unsigned int	i;
	char			*new;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	wsstart = count_ws_start(s);
	if (wsstart == lens)
		return (ft_strdup(""));
	wsend = 0;
	wsend = count_ws_end(s, lens);
	if ((new = (char*)malloc(sizeof(char) * (lens - wsstart - wsend + 1)))
			== NULL)
		return (NULL);
	i = 0;
	while (i < lens - wsstart - wsend)
	{
		new[i] = s[wsstart + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
