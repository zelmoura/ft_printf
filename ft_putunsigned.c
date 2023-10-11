/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <zelmoura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:26:34 by zelmoura          #+#    #+#             */
/*   Updated: 2023/02/01 18:15:41 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putunsigned(unsigned int nbr)
{
	int				i;

	i = 0;
	if (nbr < 10)
	{
		i = i + ft_putchar(nbr + '0');
	}	
	else
	{
		i = i + ft_putunsigned(nbr / 10);
		i = i + ft_putunsigned(nbr % 10);
	}
	return (i);
}
