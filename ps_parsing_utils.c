#include "push_swap.h"

int	ps_check_stack(t_list *stack)
{
	t_list	*current;
	t_list	*next;

	current = stack;
	while (current)
	{
		if (current->content > 2147483647 ||
			current->content < -2147483648)
			return (0);
		next = current->next;
		while (next)
		{
			if ((current->content) == (next->content))
				return (0);
			next = next->next;
		}
		current = current->next;
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
		if ((s[i] <= '9' && s[i] >= '0') || s[i] == '-' || s[i] == '+')
			i++;
		else
			return (0);
	}
	return (1);
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
	free(array);
}

// char	**join_2d(char **dest, char **src)
// {
// 	char	**ret;
// 	int		len;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	len = array_len(dest) + array_len(src);
// 	ret = malloc(sizeof(char *) * (len + 1));
// 	if (!ret)
// 		return ;
// 	while (dest[i])
// 	{
// 		ret[i] = malloc(sizeof(dest[i]));
// 		if (!ret[i])
// 			return ;
// 		ret[i] = dest[i];
// 		i++;
// 	}
// 	j = 0;
// 	while (src[j])
// 	{
// 		ret[i] = malloc(sizeof(src[j]));
// 		if (!ret[i])
// 			return ;
// 		ret[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	ret[i] = NULL;
// 	return (ret);
// }

// int	array_len(char **arr)
// {
// 	int	ret;

// 	while (arr[ret])
// 	{
// 		ret++;
// 	}
// 	return (ret);
// }