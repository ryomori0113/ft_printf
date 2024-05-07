#include "printf.h"
#include <stdio.h>
#include <limits.h>

// int main()
// {
//     char *test;
//     int value_ft;
//     int value_orgin;

//     value_ft = ft_printf("hello world\n");
//     value_orgin = printf("hello world\n");
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);

//     printf("\n");

//     value_ft = ft_printf("c: %c\n", 'a');
//     value_orgin = printf("c: %c\n", 'a');
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);

//     printf("\n");

//     value_ft = ft_printf("s: %s\n", "hello world");
//     value_orgin = printf("s: %s\n", "hello world");
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);

//     printf("\n");

//     value_ft = ft_printf("p: %p\n", test);
//     value_orgin = printf("p: %p\n", test);
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);

//     printf("\n");

//     value_ft = ft_printf("d: %d\n", 123456);
//     value_orgin = printf("d: %d\n", 123456);
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);

//     printf("\n");

//     value_ft = ft_printf("i: %i\n", 123456);
//     value_orgin = printf("i: %i\n", 123456);
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);

//     printf("\n");

//     value_ft = ft_printf("-u: %u u: %u\n", -123456, 123456);
//     value_orgin = printf("-u: %u u: %u\n", -123456, 123456);
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);

//     printf("\n");

//     value_ft = ft_printf("x: %x X: %X\n", 123456, 123456);
//     value_orgin = printf("x: %x X: %X\n", 123456, 123456);
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);
//     printf("\n");

//     value_ft = ft_printf("%%\n");
//     value_orgin = printf("%%\n");
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);

//     printf("\n");

//     value_ft = ft_printf("INT_MAX: %d INT_MIN: %d\n", INT_MAX, INT_MIN);
//     value_orgin = printf("INT_MAX: %d INT_MIN: %d\n", INT_MAX, INT_MIN);
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);

//     printf("\n");

//     value_ft = ft_printf("%");
//     printf("\n");
//     value_orgin = printf("%");

//     printf("\n");

//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);

//     printf("\n");
// 	printf("\n");

// 	value_ft = ft_printf("%\n");
//     value_orgin = printf("%\n");
//     printf("ft_printf: %d\n", value_ft);
//     printf("   printf: %d\n", value_orgin);


// }

	int main()
{
    char *test;
    int value_ft;
    int value_orgin;

	value_ft = ft_printf("abc%r\n");
    value_orgin = printf("abc%r\n");
    printf("ft_printf: %d\n", value_ft);
    printf("   printf: %d\n", value_orgin);

    printf("\n");

	value_ft = ft_printf("%");
    value_orgin = printf("%");
    printf("ft_printf: %d\n", value_ft);
    printf("   printf: %d\n", value_orgin);

   printf("\n");

    value_orgin = printf(" ");
	printf("   printf: %d\n", value_orgin);

   printf("\n");

    value_orgin = printf("\0");
	printf("   printf: %d\n", value_orgin);

	printf("\n");

    value_orgin = printf("?");
	printf("   printf: %d\n", value_orgin);

    printf("\n");
}


