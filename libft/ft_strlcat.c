int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

int ft_strlcat(char *dest, char *src, int size)
{
    int i;
    int j;

    j = ft_strlen(dest);
    i = ft_strlen(dest) - 1;
    if (j > size)
        return (size + ft_strlen(src));
    while (++i < size - 1 && *src != 0)
    {
        dest[i] = *src;
        src++;
    }
    dest[i] = 0;
    return (j + ft_strlen(src));
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char    dest[9] = "abcde";
    char    *src = "fgh";
    ft_strlcat(dest, src, 9);
    printf("%s", dest);
    return (0);
}