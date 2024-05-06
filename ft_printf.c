/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:45:17 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/06 16:53:38 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	const char	*save;
	va_list		args;
	int			num;

	num = 0;
	save = ft_strdup(input);
	if (!save)
		return (0);
	va_start(args, input);
	num = ft_count_out(save, args);
	va_end(args);
	free((char *)save);
	return (num);
}

int	ft_count_out(const char *save, va_list args)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (save[i])
	{
		if (save[i] == '%')
		{
			i++;
			c += ft_case_something(save[i], args);
		}
		else
		{
			ft_putchar_fd(save[i], 1);
			c++;
		}
		i++;
		if (!save[i])
			return (c);
	}
	return (c);
}

int	ft_case_something(int c, va_list args)
{
	int	n;

	n = 0;
	if (c == 'c')
		n = ft_case_char(va_arg(args, int));
	else if (c == 's')
		n = ft_case_string(va_arg(args, char *));
	else if (c == 'p')
		n = ft_case_pointer((unsigned long long)va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		n = ft_case_int(va_arg(args, int));
	else if (c == 'u')
		n = ft_case_unint((unsigned int)va_arg(args, unsigned int));
	else if (c == 'x')
		n = ft_case_hexa(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		n = ft_case_hexa(va_arg(args, unsigned int), 2);
	else if (c == '%')
		n = ft_putstr_count("%");
	return (n);
}
