#include "libft.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;
    while (dest[i])
        i++;
    while (*src && n--)
    {
        dest[i] = *src;
        src++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}