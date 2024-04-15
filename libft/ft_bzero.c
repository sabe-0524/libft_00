void    ft_bzero(void *buf, int n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)buf;
    while (n > 0)
    {
        *ptr = 0;
        ptr++;
        n--;
    }
}