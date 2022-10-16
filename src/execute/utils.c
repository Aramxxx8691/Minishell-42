#include "minishell.h"

t_list_spl_pipe *create_list_pipe(void)
{
    t_list_spl_pipe  *list;

    list = malloc(sizeof(t_list_spl_pipe));
    if (list == NULL)
        exit (1);
    list->head = NULL;
    list->tail = NULL;
    return (list);
}

t_spl_pipe  *new_spl_pipe(void  *arg1, void *arg2)
{
    t_spl_pipe  *new_pipe;
    t_spl_pipe  *tmp;

    new_pipe = malloc(sizeof(t_spl_pipe));
    if (new_pipe == NULL)
        exit (1);
    new_pipe->flag_new_pipe = 0;
    new_pipe->fd_in = 0;
    new_pipe->fd_out = 1;
    new_pipe->heredoc = NULL;
    new_pipe->in_files = NULL;
    new_pipe->out_files = NULL;
    new_pipe->output_mode = 0;
    new_pipe->input_mode = 0;
    new_pipe->next = NULL;
    new_pipe->prev = NULL;
    return (new_pipe);
}

t_spl_pipe *add_pipe(t_list_spl_pipe *list, t_spl_pipe *new_pipe)
{
    if (list->head == NULL)
    {
        list->head = new_pipe;
        list->tail = new_pipe;
    }
    else 
    {
        list->tail->next = new_pipe;
        list->tail =  list->tail->next;
    }
    return (new_pipe);
}

void print_list(t_spl_pipe *head)
{
    while (head)
    {
        printf("%s, ", head->cmd[0]);
        printf("%s\n", head->cmd[1]);
        head = head->next;
    }
    
}


int	print_env(t_envp *head)
{
	while (head)
	{
		printf("%s=%s\n", head->key, head->val);
		head = head->next;
	}
	return (0);
}