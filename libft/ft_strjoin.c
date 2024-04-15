#include "libft.h"

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     len;
    char    *ans;
    int     i;
    int     j;

    i = 0;
    j = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    ans = malloc(sizeof(char) * (len + 1));
    if (!ans)
        return (NULL);
    while (s1[j] != 0)
    {
        ans[i++] = s1[j];
        j++;
    }
    j = 0;
    while (s2[j] != 0)
    {
        ans[i++] = s2[j];
        j++;
    }
    ans[i] = 0;
    return (ans);
}

#include <stdio.h>
int main(void)
{
    char *ans;
    char s1[] = "abcd";
    char s2[] = "efg";
    ans = ft_strjoin(s1, s2);
    printf("%s\n", ans);
    free(ans);
    return (0);
}