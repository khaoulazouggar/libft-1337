#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((tab = (char *)malloc((len) + 1)) == NULL)
		return (NULL);
	while (i < (int)len)
	{
		tab[i] = s[i + start];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
