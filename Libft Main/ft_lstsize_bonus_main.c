#include <stdio.h>

int main(void)
{
    t_list *lst = NULL;
    int value1 = 42;
    int value2 = 23;
    int value3 = 14;
    lst = ft_lstnew(&value1);
    lst->next = ft_lstnew(&value2); 
    lst->next->next = ft_lstnew(&value3); 
    int size = ft_lstsize(lst);
    printf("%d", size);
}