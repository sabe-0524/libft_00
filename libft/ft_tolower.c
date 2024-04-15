int ft_toupper(int c)
{
    if ('A' <= c && c <= 'Z')
        c += 32;
    return (c);
}