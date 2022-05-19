#include "minishell.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	t_cmd	cmd;
	char 	*line = "echo hello world";

	counttoken(line, &cmd);
	return (0);
}

void	printerror(void)
{
	printf("error\n");
}

void	skipstr(char *line, char quote, int *count, int *i)
{
	(*i)++;
	while (line[*i] != quote && line[*i] != '\0')
		*i += 1;
	if (line[*i] == quote)
	{
		*count += 1;
		(*i)++;
	}
	else
		printerror();
}

int		counttoken(char	*line, t_cmd *cmd)
{
	int		count;
	int		i;
	int		space;
	int		len;

	count = 0;
	i = 0;
	space = 1;
	len = 0;
	while (line[i] != '\0')
	{
		if (line[i] == '"' || line[i] == '\'')
			skipstr(line, line[i], &count, &i);
		if (line[i] <= 32 && space == 0)
			space = 1;
		else if (line[i] > 32 && space == 1)
		{
			len = 0;
			while (line[len + i] > 32)
				len++;
			filllst(&(cmd->tokens), line, i, len);
			i += len - 1;
			space = 0;
			count++;
		}
		i++;
	}
	return (count);
}

void	filllst(t_token **lst, char *str, int	i, int len)
{
	t_token	*tokens;
	t_token	*last;

	last = *lst;
	tokens = malloc(sizeof(t_token));
	tokens->token = ft_substr(str, i, len);
	if (last == NULL)
	{
		*lst = tokens;
		return ;
	}		
	else
	{
		while (last->next)
			last = last->next;
		last->next = tokens;
	}
}

// void	filllst(t_token **lst, char *str, int	i, int len)
// {
// 	t_token	*token;

// 	token = *lst;
// 	token = addnewlst(lst);
// 	(token)->token = ft_substr(str, i, len);
// 	// lst->token = ft_substr(str, i, len);
// }

// t_token	*addnewlst(t_token **lst)
// {
// 	t_token	*token;
// 	t_token	*last;

// 	last = *lst;
// 	token = malloc(sizeof(t_token));
// 	if (last == NULL)
// 	{
// 		*lst = token;
// 		return (*lst);
// 	}
		
// 	else
// 	{
// 		while ((last))
// 			last = (last)->next;
// 		(last) = token;
// 	}
// 	return ((last));
// }