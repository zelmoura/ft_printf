/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexamin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <zelmoura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 05:26:21 by zelmoura          #+#    #+#             */
/*   Updated: 2023/01/27 10:33:55 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_hexamin(unsigned long int nbr)
{
	int		i;
	char	*bs;

	i = 0;
	bs = "0123456789abcdef";
	if (nbr < 16)
	{
		i = i + ft_putchar(bs[nbr]);
	}
	else
	{
		i = i + ft_hexamin(nbr / 16);
		i = i + ft_hexamin(nbr % 16);
	}
	return (i);
}
