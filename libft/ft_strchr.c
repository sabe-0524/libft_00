char    *ft_strchr(char *str, int c)
{
    while (*str != 0)
    {
        if (*str == c)
            return (str);
        str++;
    }
    if (c == 0)
        return (str);
    return (0);
}