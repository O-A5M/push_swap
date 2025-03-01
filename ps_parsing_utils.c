#include "push_swap.h"

int	ps_dup_check(char **s, int ac)
{
	int	i;
	int	j;
	int	len;

	i = 1;
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

void	clear_list(void	*node)
{
	free(node);
}

int	ps_check_input(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] <= '9' && s[i] >= '0')
			i++;
		else
			return (0);
	}
	return (1);
}
