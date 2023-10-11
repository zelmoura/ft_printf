/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <zelmoura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:17:09 by zelmoura          #+#    #+#             */
/*   Updated: 2023/01/27 10:22:10 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	nbr;
	int				i;

	nbr = n;
	i = 0;
	if (n < 0)
	{
		i = i + ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr < 10)
	{
		i = i + ft_putchar(nbr + '0');
	}
	else
	{
		i = i + ft_putnbr(nbr / 10);
		i = i + ft_putnbr(nbr % 10);
	}
	return (i);
}
