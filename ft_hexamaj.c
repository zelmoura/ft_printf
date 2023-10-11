/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexamaj.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <zelmoura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:33:45 by zelmoura          #+#    #+#             */
/*   Updated: 2023/02/03 17:33:50 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_hexamaj(unsigned long int nbr)
{
	int		i;
	char	*bs;

	i = 0;
	bs = "0123456789ABCDEF";
	if (nbr < 16)
	{
		i = i + ft_putchar(bs[nbr]);
	}
	else
	{
		i = i + ft_hexamaj(nbr / 16);
		i = i + ft_hexamaj(nbr % 16);
	}
	return (i);
}
