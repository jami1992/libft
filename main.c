#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <stdlib.h>
#include <string.h>

int	main(void)
{

	/* -------------------- This is to test ft_toupper -------------------- */
	char	str;

	str = 'e';
	printf("uppercase of %c is %c\n", str, ft_toupper(str));
	printf("uppercase of %c is %c\n", str, toupper(str));

	/* -------------------- This is to test ft_atoi ----------------------- */
	char str1[] = "123ab";
    char str2[] = "123ab";

    printf("orig Atoi %d\n", atoi(str1));
    printf("my Atoi %d\n", ft_atoi(str2));

	/* -------------------- This is to test ft_bzero ----------------------- */
	char str3[] = "123456789";
	bzero(str3, 4);
	int	i;

	i = 0;
	while(i < 8)
	{
		printf("%d ", str3[i]);
		i++;
	}
	puts(str3);

	// testing own function:
	char str4[] = "123456789";
	ft_bzero(str4, 4);
	int j;

	j = 0;
	while (j < 8)
	{
		printf("%d ", str4[j]);
		j++;
	}
	puts(str4);
	/*-------------------- This is to test isalnum ------------------------*/
	int	str5;
	str5 = '8';
	printf("return value is %d\n", ft_isalnum(str5));
	printf("return value is %d\n", isalnum(str5));
	/*-------------------- This is to test isalpha ------------------------*/
	int	str6;
	str6 = '9';
	printf("return value is %d\n", ft_isalpha(str6));
	printf("return value is %d\n", isalpha(str6));
	/*-------------------- This is to test ft_isascii -----------------------*/
	int	str7;
	str7 = '8k \n';
	printf("return value is %d\n", ft_isascii(str7));
	printf("return value is %d\n", isascii(str7));
}
