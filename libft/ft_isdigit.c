#include "libft.h"

int	ft_isdigit(int c)
{
	if ('1' <= c && c <= '9')
		return (1);
	else
		return (0);
}
