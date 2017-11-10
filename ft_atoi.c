/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgreil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:37:34 by mgreil            #+#    #+#             */
/*   Updated: 2017/11/10 16:12:35 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	nb;
	unsigned int	i;

	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' ||
			*str == '\v' || *str == '\f')
		str++;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	nb = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (str[0] == '-')
		return (nb * -1);
	return (nb);
}
