#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *src)
{
    char *dest;

    dest = malloc(ft_strlen(src) + 1);
    if (dest == NULL)
        return (NULL);
    ft_strcpy(dest, src);
    return (dest);
}