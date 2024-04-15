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
    // if (set[0] == 0)
    //     return (ft_strlen(s1));
    while (i + ft_strlen(set) <= ft_strlen(s1))
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

char	*ft_strncat(char *dest, char const *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *ans;
    int     i;
    int     j;

    ans = malloc(sizeof(char) * (ft_count(s1, set) + 1));
    if (!ans)
        return (NULL);
        ans[0] = 0;
    i = 0;
    while (s1[i] != 0)
    {
        j = 0;
        while (set[j] != 0 && s1[i + j] != 0)
        {
            if (s1[i + j] != set[j])
                break ;
            j++;
        }
        if (set[j] != 0 || set[0] == 0)
        {
            ft_strncat(ans, &s1[i], j + 1);
            i += (j + 1);
        }
        else
            i += j;
    }
    ans[i] = 0;
    return (ans);
}

int main(void)
{
    char *s1 = "aa12bb12";
    char *set = "12";
    char *ans = ft_strtrim(s1, set);
    printf("%s", ans);
    free(ans);
    return (0);
}
