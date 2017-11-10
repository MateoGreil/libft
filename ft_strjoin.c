/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:51:20 by mgreil            #+#    #+#             */
/*   Updated: 2017/11/10 16:15:20 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	lens1;
	unsigned int	lens2;
	char			*new;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if ((new = (char*)malloc(sizeof(char) * (lens1 + lens2))) == NULL)
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		new[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < lens2)
	{
		new[lens1 + i] = s2[i];
		i++;
	}
	new[lens1 + i] = '\0';
	return (new);
}
