/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 19:08:36 by nsayer            #+#    #+#             */
/*   Updated: 2017/11/08 17:56:31 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int lim;

	lim = 0;
	if (nb == -2147483648)
	{
		nb = nb + 1;
		lim = 1;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		if (lim == 0)
			ft_putnbr(nb % 10);
		else
			ft_putchar('8');
	}
	else
		ft_putchar(nb + '0');
}
