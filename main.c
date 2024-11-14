#include <libc.h>
#include "libft.h"

void a_to_c(void *c)
{
    strlcpy((char *)c, "c", 2);
}
void print(void *c)
{
    printf("%c\n", *((char *)c));
}

int main()
{

    t_list *head = NULL;
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 3;
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("a")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("a")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("a")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("a")));
    // printf("%d\n",ft_lstsize(head));
    ft_lstiter(head, a_to_c);
    ft_lstiter(head, print);
    
}