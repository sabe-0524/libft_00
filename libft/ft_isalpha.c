#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	int	num = ft_isalpha('g');
	printf("%d", num);
	return (0);
}*/
