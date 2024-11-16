
//> const, işaretçinin gösterdiği verinin değiştirilemez olduğunu ifade eder.
//> Eğer işaretçinin kendisinin değiştirilmesini istemiyorsanız, bu durumda const anahtarını hem işaretçinin gösterdiği veriye
//> hem de işaretçiye uygulamalısınız: const char * const s1;

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*new_str;

	if(s1 == NULL)
		return (NULL);
	while (*s1 !='\0' && ft_strchr(set, *s1) != NULL)
		s1++;
	len = ft_strlen(s1);
	if(len==0)
		return (ft_strdup(""));
	while (len && s1[len - 1] && ft_strchr(set, s1[len - 1]) != NULL)
		len--;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s1, len);
	new_str[len] = '\0';
	return (new_str);
}