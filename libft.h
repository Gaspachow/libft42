#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

size_t	ft_strlen(const char *str);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, const char *src);
int     ft_strcmp(const char *str1, const char *str2);
int     ft_strncmp(const char *str1, const char *str2, size_t n);
int     ft_toupper(char c);
int     ft_tolower(char c);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char    *ft_strdup(const char *src);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
int     ft_isascii(int c);
char    *ft_strstr(const char *haystack, const char *needle);
char    *ft_strnstr(const char *haystack, const char *needle, size_t size);
void    *ft_memset(void *ptr, int c, size_t len);


#endif
