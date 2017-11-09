/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:26:22 by mgreil            #+#    #+#             */
/*   Updated: 2017/11/09 12:03:08 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countword(char const *s, char c)
{
	unsigned int	i;
	unsigned int	nword;

	i = 0;
	nword = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			nword++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nword);
}
/*tmp->*/#include <stdio.h>
int		ft_wl(char const *s, char c)
{
	unsigned int	wlen;

	wlen = 0;
	while (s[wlen] && s[wlen] != c)
		wlen++;
	return (wlen);
}

char	*mallocword(char const *s, char c, unsigned int *i)
{
	char	*tab;

	tab = NULL;
	while (s[*i] == c)
		(*i)++;
	if ((tab = (char*)malloc(sizeof(char) *
	ft_wl((char*)s + *i, c) + 1)) == NULL)
		return (NULL);
	return (tab);
}

char	**ft_filltab(char **tab, char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	word;
	
	i = 0;
	word = 0;
	while (s[i])
	{
		if ((tab[word] = mallocword(s, c, &i)) == NULL)
			return (NULL);
		j = 0;
		while (s[i] && s[i] != c)
		{
			tab[word][j] = s[i];
			i++;
			j++;
		}
		tab[word][j] = '\0';
		while (s[i] && s[i] == c)
			i++;
		word++;
	}
	tab[word] = (char*)malloc(sizeof(char) * 1);
	tab[word][0] = '\0';
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char			**tab;

	if ((tab = (char**)malloc(sizeof(char*) * (ft_countword(s, c) + 1)))
			== NULL)
		return (NULL);
	tab = ft_filltab(tab, s, c);
	return (tab);
}
