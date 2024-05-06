/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_unint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:03:50 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/04 15:59:59 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_nbr(unsigned long long n)
{
	char				str;
	unsigned long long	tmp;
	size_t				t;

	tmp = n;
	t = 0;
	while (9 < tmp)
	{
		tmp = tmp / 10;
		t++;
	}
	if (9 < n)
		ft_put_nbr(n / 10);
	str = '0' + n % 10;
	write (1, &str, 1);
	return (t + 1);
}

int	ft_case_unint(unsigned long long unint)
{
	int	n;

	n = 0;
	n = ft_put_nbr(unint);
	return (n);
}
