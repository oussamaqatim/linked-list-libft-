
#include <libc.h>

typedef struct s_list
{
    int content;
    struct s_list *next;
}   t_khobza;

t_khobza  *ft_lstnew(int content);

