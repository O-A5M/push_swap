#include "push_swap.h"

int	ps_dup_check(char **s, int ac)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac - 1)
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

char	**splite_input(char **input, int ac)
{
	char	**ret;
	int		i;

	i = 0;
	ret = malloc(sizeof(char *) * ac);
	if (!ret)
		return (NULL);
	while (i < ac - 1)
	{
		ret[i] = malloc(sizeof (char) * (ft_strlen(input[i + 1]) + 1));
		// if (!ret[i])
			//TODO
		ft_strlcpy(ret[i], input[i + 1], ft_strlen(input[i + 1]) + 1);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
}
