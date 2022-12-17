#include <stdio.h>
#include <ctype.h>
#include "libft.h"
int	main(void)
{
	char	str;

	str = 'e';
	printf("uppercase of %c is %c\n", str, ft_toupper(str));
	printf("uppercase of %c is %c\n", str, toupper(str));
}
