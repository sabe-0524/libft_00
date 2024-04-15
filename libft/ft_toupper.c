int ft_toupper(int c)
{
    if ('a' <= c && c <= 'z')
        c -= 32;
    return (c);
}

#include <stdio.h>

int main(void)
{
    char c = 'd';
    printf("%c", ft_toupper(c));
    return (0);
}