#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    size_t  len;

    len = ft_strlen(needle);
    if (haystack == NULL || needle == NULL)
        return (NULL);
    if (!(*needle))
        return ((char *)haystack);
    while(*haystack)
    {
        if (ft_strncmp(haystack, needle, len) != 0)
            haystack++;
        else
            return ((char *)haystack);
    }
    return (NULL);
}