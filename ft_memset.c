#include "libft.h"

void    *ft_memset(void *ptr, int c, size_t len)
{
    unsigned char *set;

    set = (unsigned char *)ptr;
    while (len--)
    {
        *set = (unsigned char)c;
        set++;
    }
    return (ptr);
}
