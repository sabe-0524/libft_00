#include <stdlib.h>

void    *ft_calloc(int count, int size)
{
    void    *buf;
    void    *ans;
    int i;

    i = 0;
    buf = malloc(size * count);
    if (buf == NULL)
        return (NULL);
    while (i < count)
    {
        buf = 0;
        buf += size;
        count++;
    }
    return (ans);
}