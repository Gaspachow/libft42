#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    if (n == 0)
        return (0);
    while (*str1 && *str2 && --n)
    {
        if (*str1 != *str2)
            return ((unsigned char)*str1 - (unsigned char)*str2);
        str1++;
        str2++;
    }
    return ((unsigned char)*str1 - (unsigned char)*str2);
}