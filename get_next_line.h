#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE
# endif

# ifndef FD_SIZE
#  define FD_SIZE 1000
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

char				*get_next_line(const int fd);
int					ft_strlen(char const *str);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strdup(char *src);
char				*ft_strchr(const char *str, int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);

#endif
