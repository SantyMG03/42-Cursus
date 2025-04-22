#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    int    *z;
    size_t          i;

    i = 0;
    z = s;

    while (i < n)
    {
        z[i] = 0;
        i++;
    }
}