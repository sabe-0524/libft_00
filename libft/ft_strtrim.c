#include "libft.h"
#include <stdio.h>

size_t ft_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

int ft_count(char const *s1, char const *set)
{
    int len;
    int i;
    int j;

    len = ft_strlen(s1);
    i = 0;
    while (s1[i + ft_strlen(set)] != 0)
    {
        j = 0;
        while (set[j] != 0)
        {
            if (s1[i + j] != set[j])
                break ;
            j++;
        }
        if (j == ft_strlen(set))
                len -= ft_strlen(set);
        i++;
    }
    return (len);
}

size_t ft_strlcat(char *restrict dest, const char *restrict src,
						size_t size)
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

// char    *ft_strtrim(char const *s1, char const *set)
// {
//     char    *ans;
//     int     i;
//     int     j;

//     ans = malloc(sizeof(char) * (ft_count(s1, set) + 1));
//     i = 0;
//     while (s1[i] != 0)
//     {
//         j = 0;
//         while (set[j] != 0 && s1[i + j] != 0)
//         {
//             if (s1[i + j] != set[j])
//                 break ;
//             j++;
//         }
//         if (set[j] != 0)
//             ft_strlcat(ans, &s1[i], ft_strlen(ans) + j + 1);
//         i += (j + 1);
//     }
//     return (ans);
// }

char *ft_strtrim(const char *s1, const char *set)
{
    char *ans;
    int i;
    int j;
    int k;

    ans = malloc(sizeof(char) * (ft_count(s1, set) + 1));
    if (!ans)
        return (NULL);
    
    i = 0;
    k = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while (set[j] != '\0' && s1[i + j] != '\0' && s1[i + j] == set[j])
            j++;
        if (set[j] == '\0') // No match found
        {
            ans[k++] = s1[i];
            i++;
        }
        else
        {
            i += j + 1;
        }
    }
    ans[k] = '\0';
    return (ans);
}


int main(void)
{
    char *s1 = "abc12defg12";
    char *set = "12";
    char *ans = ft_strtrim(s1, set);
    printf("%s", ans);
    free(ans);
    return (0);
}
