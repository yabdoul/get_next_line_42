#include  "get_next_line_utils.h"
size_t	ft_strlen(const char *s)
{
	size_t	leng;

	leng = 0;
	while (s[leng])
		leng++;
	return (leng);
}
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	if (dest == src)
		return (dest);
	if (!dest && !src)
		return (NULL);
	while (count < n)
	{
		((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
		count++;
	}
	return (dest);
}
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	if ((!dst || !src) && size == 0)
		return (0);
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (len_src);
	if (size <= len_dst)
		return (len_src + size);
	while (src[i] && len_dst + i < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*concat;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat != NULL)
	{
		ft_memcpy(concat, s1, len1 + 1);
		ft_strlcat(concat + len1, s2, len2 + 1);
		concat[len1 + len2] = '\0';
	}
	return (concat);
}
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && (unsigned char)c != s[i])
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}
