#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *s;
    size_t          i;

    i = 0;
    s = b;
    while (i < len)
    {
        s[i] = (unsigned char)c;
        i++;
    }
    return (b);
}