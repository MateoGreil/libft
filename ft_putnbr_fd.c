/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 19:08:36 by nsayer            #+#    #+#             */
/*   Updated: 2017/11/08 17:59:09 by mgreil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
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
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		if (lim == 0)
			ft_putnbr_fd(nb % 10, fd);
		else
			ft_putchar_fd('8', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
