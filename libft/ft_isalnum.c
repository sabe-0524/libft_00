#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if ('1' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    else
        return (0);
}

#include <stdio.h>

int main(void)
{
    int num = ft_isalnum('6');
    printf("%d", num);
    return (0);
}