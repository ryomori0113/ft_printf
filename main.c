/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:01:27 by ryomori           #+#    #+#             */
/*   Updated: 2024/05/06 16:12:32 by ryomori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    int num1 = ft_printf("m_c char > %c            %c  <  ", 'a', 'b');
    printf("%d \n", num1);
    int num2 = printf("o_c char > %c            %c  <  ", 'a', 'b');
    printf("%d \n", num2);

    printf("\n");
    static char str = '\0';
    num1 = ft_printf("m_c char > %c            %c  <   ", str, 'b');
    printf("%d \n", num1);
    num2 = printf("o_c char > %c            %c  <   ", str, 'b');
    printf("%d \n", num2);

    printf("\n");
    num1 = ft_printf("m_s string   > %s            %s  <   ", "hey", "siri");
    printf("%d \n", num1);
    num2 = printf("o_s string   > %s            %s  <   ", "hey", "siri");
    printf("%d \n", num2);

    printf("\n");
    num1 = ft_printf("m_s string   > %s            %s  <   ", "", "\0");
    printf("%d \n", num1);
    num2 = printf("o_s string   > %s            %s  <   ", "", "\0");
    printf("%d \n", num2);

    printf("\n");
    int num = 1;
    int *p_num1 = &num;
    num1 = ft_printf("m_p poiner   > %p %p <   ", "hey", p_num1);
    printf("%d \n", num1);
    num2 = printf("o_p poiner   > %p %p <   ", "hey", p_num1);
    printf("%d \n", num2);

    printf("\n");
    num1 = ft_printf("m_d digit > %d            %d  <   ", -123, 0);
    printf("%d \n", num1);
    num2 = printf("o_d digit > %d            %d  <   ", -123, 0);
    printf("%d \n", num2);

    printf("\n");
    num1 = ft_printf("m_i int   > %i            %i  <   ", -123, 42);
    printf("%d \n", num1);
    num2 = printf("o_i int   > %i            %i  <   ", -123, 42);
    printf("%d \n", num2);

    printf("\n");
    num1 = ft_printf("m_u uint > %u            %u  <   ", 1, 4321);
    printf("%d \n", num1);
    num2 = printf("o_u uint > %u            %u  <   ", 1, 4321);
    printf("%d \n", num2);

    printf("\n");
    num1 = ft_printf("m_u uint > %u            %u  <   ", 1, LONG_MAX);
    printf("%d \n", num1);
    num2 = printf("o_u uint > %u            %u  <   ", 1, LONG_MAX);
    printf("%d \n", num2);

	    printf("\n");
    num1 = ft_printf("m_u uint > %u            %u  <   ", 1, UINT_MAX);
    printf("%d \n", num1);
    num2 = printf("o_u uint > %u            %u  <   ", 1, UINT_MAX);
    printf("%d \n", num2);

	    printf("\n");
    num1 = ft_printf("m_u uint > %u            %u  <   ", 1, LONG_MIN);
    printf("%d \n", num1);
    num2 = printf("o_u uint > %u            %u  <   ", 1, LONG_MIN);
    printf("%d \n", num2);
	
    printf("\n");
    num1 = ft_printf("m_x hex  > %x        %x  <   ", -1, ULONG_MAX);
    printf("%d \n", num1);
    num2 = printf("o_x hex  > %x        %x  <   ", -1, ULONG_MAX);
    printf("%d \n", num2);
	
	    printf("\n");
    num1 = ft_printf("m_x hex  > %x        %x  <   ", -1, ULONG_MAX);
    printf("%d \n", num1);
    num2 = printf("o_x hex  > %x        %x  <   ", -1, ULONG_MAX);
    printf("%d \n", num2);

    printf("\n");
    num1 = ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    printf("%d \n", num1);
    num2 = printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    printf("%d \n", num2);

    printf("\n");
    num1 = ft_printf("m_%% %%      > %c            %s  <   ", 'a', "abc");
    printf("%d \n", num1);
    num2 = printf("o_%% %%      > %c            %s  <   ", 'a', "abc");
    printf("%d \n", num2);

    printf("\n");
    num1 = ft_printf("%%%");
    printf("%d \n", num1);
    num2 = printf("%%%");
    printf("%d \n", num2);

    return (0);
}
