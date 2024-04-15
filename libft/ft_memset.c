void    ft_memset(void *buf, int c, int n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)buf;
    while (n > 0)
    {
        *ptr = c;
        ptr++;
        n--;
    }
}

#include <stdio.h>

int main(void)
{
    char    s[] = "abcdefg";
    ft_memset(s + 2, '1', 2);
    printf("%s", s);
    return (0);
}