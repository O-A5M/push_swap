#include "push_swap.h"

int	ps_dup_check(char **s, int ac)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strlen(s[i]) > ft_strlen(s[j]))
				len = ft_strlen(s[i]);
			else
				len = ft_strlen(s[j]);
			if (!ft_strncmp(s[i], s[j], len))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
