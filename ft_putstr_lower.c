/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:04:44 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/04 13:23:26 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_count(char *c)
{
	int	n;

	if (!c)
		return (0);
	n = ft_strlen(c);
	ft_putstr_fd(c, 1);
	return (n);
}

char	*ft_all_lower(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		c[i] = ft_tolower(c[i]);
		i++;
	}
	return (c);
}
