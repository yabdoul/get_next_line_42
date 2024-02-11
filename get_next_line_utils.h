#ifndef GET_NEXT_LINE_UTILS_H
#define GET_NEXT_LINE_UTILS_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
#ifndef BUFFER_SIZE 
#define BUFFER_SIZE 3
#endif
# include <fcntl.h>
#include <stdlib.h> 
#include <stdio.h>
char	*ft_strchr(const char *s, int c); 
char	*ft_strjoin(char const *s1, char const *s2) ; 
#endif