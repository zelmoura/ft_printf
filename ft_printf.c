/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <zelmoura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 00:35:26 by zelmoura          #+#    #+#             */
/*   Updated: 2023/02/03 17:32:12 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	para_function(const char *str, va_list p, int *i)
{
	int	length;

	length = 0;
	if (*str == '%')
		length = length + ft_putchar('%');
	else if (*str == 'c')
		length = length + ft_putchar(va_arg(p, int));
	else if (*str == 'd' || *str == 'i')
		length = length + ft_putnbr(va_arg(p, int));
	else if (*str == 's')
		length = length + ft_putstr(va_arg(p, char *));
	else if (*str == 'X')
		length = length + ft_hexamaj(va_arg(p, unsigned int));
	else if (*str == 'x')
		length = length + ft_hexamin(va_arg(p, unsigned int));
	else if (*str == 'u')
		length = length + ft_putunsigned(va_arg(p, unsigned int));
	else if (*str == 'p')
		length = length + ft_putptr(va_arg(p, unsigned long));
	else
		(*i)--;
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		ret;
	int		i;

	ret = 0;
	i = 0;
	va_start(ptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ret = ret + para_function(&str[i], ptr, &i);
		}
		else
			ret += ft_putchar(str[i]);
		i++;
	}
	va_end(ptr);
	return (ret);
}
