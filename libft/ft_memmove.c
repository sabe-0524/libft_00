void    ft_memmove(void *buf1, void *buf2, int n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char *)buf1;
    ptr2 = (unsigned char *)buf2;
    if (ptr1 < ptr2)
    {
        while (n-- > 0)
            *ptr1++ = *ptr2++;
    }
    else
    {
        ptr1 += n - 1;
        ptr2 += n - 1;
        while (n-- > 0)
            *ptr1-- = *ptr2--;
    }
}
