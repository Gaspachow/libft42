#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if(*str == c)
            return ((char *)str);
        else
            str++;
    }
    if (c == '\0')
        return ((char *)str);
    else
        return (NULL);
}