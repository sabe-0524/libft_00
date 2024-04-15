#include "libft.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

int ft_min(int num1, int num2)
{
    if (num1 < num2)
        return (num1);
    else
        return (num2);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int     num;
    char    *ans;
    int     i;

    i = 0;
    num = ft_min(ft_strlen(s) - start, len);
    ans = malloc(sizeof(char) * (num + 1));
    if (!ans)
        return (NULL);
    while (s[start + i] != 0 && i < len)
    {
        ans[i] = s[start + i];
        i++;
    }
    ans[i] = 0;
    return (ans);
}