#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;

    if (dest == NULL && src == NULL)
        return (NULL);
    ptr1 = (unsigned char *)dest;
    ptr2 = (unsigned char *)src;
    while (n--)
        *(ptr1++) = *(ptr2++);
    return (dest);
}