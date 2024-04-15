int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

int ft_strlcpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (i++ < n - 1 && src[i] != 0)
        dest[i] = src[i];
    dest[i] = 0;
    return (ft_strlen(src));
}