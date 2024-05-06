/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_char_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:12:37 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/06 11:38:09 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_case_int(int i)
{
	char	*str;
	int		n;

	str = ft_itoa(i);
	n = ft_putstr_count(str);
	free(str);
	return (n);
}
