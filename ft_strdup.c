#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	char	*ans;
	size_t	s1_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	ans = malloc(sizeof(char) * (s1_len + 1));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		ans[i] = s1[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
