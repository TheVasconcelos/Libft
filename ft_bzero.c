
void    ft_bzero(void *s, unsigned int n)
{
    unsigned char *ptr;
    unsigned int  i;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}