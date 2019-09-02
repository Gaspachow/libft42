#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

size_t	ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, const char *src);
int     ft_strcmp(const char *str1, const char *str2);
int     ft_strncmp(const char *str1, const char *str2, size_t n);
int     ft_toupper(char c);
int     ft_tolower(char c);



#endif
