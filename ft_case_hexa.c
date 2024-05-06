/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:04:13 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/04 16:01:23 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case_hexa(unsigned int i, int f)
{
	char	*hex;
	int		n;

	if (!i)
		i = 0;
	hex = ft_base((unsigned long long)i, 16);
	if (f == 1)
		hex = ft_all_lower(hex);
	n = ft_putstr_count(hex);
	free (hex);
	return (n);
}
