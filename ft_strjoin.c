#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int s1_size;
	unsigned int s2_size;
	char *new_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	new_str = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, s1_size + 1);
	ft_strlcat(new_str, s2, s1_size + s2_size + 1);
	return (new_str);
}