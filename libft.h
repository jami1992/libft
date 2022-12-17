int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
int     ft_isalnum(int str);
int	    ft_isalpha(int str);
int	    ft_isascii(int str);
int	    ft_isdigit(int str);
int     ft_isprint(int str);
void	*ft_memchr(char *s, int c, size_t n);
int     ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memcpy(void *restrict dst, void *restrict src, size_t n);
void	*ft_memmove(void *dst, void *src, size_t len);
void	*ft_memset(char *b, int c, size_t len);
char	*ft_strchr(char *s, int c);
int     ft_strlen(char *str);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(char *haystack, char *needle, size_t len)
char	*ft_strrchr(char *s, int c);
int	    ft_tolower(int c);
int     ft_toupper(int c);