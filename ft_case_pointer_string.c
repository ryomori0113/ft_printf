/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_pointer_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:02:56 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/07 16:33:36 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_pointer(unsigned long long point)
{
	char	*p;
	int		n;

	p = ft_all_lower(ft_base(point, 16));
	n = ft_putstr_count("0x");
	n += ft_putstr_count(p);
	free(p);
	return (n);
}

int	ft_case_string(char *str)
{
	int	n;

	if (str == NULL)
		str = "(null)";
	n = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (n);
}
