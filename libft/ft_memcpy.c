void    ft_memcpy(void *buf1, void *buf2, int n)
{
    unsigned char ptr1;
    unsigned char ptr2;

    ptr1 = (unsigned char *)buf1;
    ptr2 = (unsigned char *)buf2;
    while (n > 0)
    {
        ptr1 = ptr2;
        ptr1++;
        ptr2++;
        n--;
    }
}