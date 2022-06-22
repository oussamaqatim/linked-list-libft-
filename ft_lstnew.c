/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 04:42:48 by oqatim            #+#    #+#             */
/*   Updated: 2022/06/18 00:58:44 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "list.h"


t_khobza *ft_lstnew(int content)
{
    t_khobza *new;

    new = malloc(sizeof(t_khobza));
    new->content = content;
    new->next = NULL;

    return (new);
}


int main()
{
    t_khobza *lst;
    t_khobza *lst_2; [&]
    t_khobza *head;
    
    lst = ft_lstnew(1);
    lst_2 = ft_lstnew(2); {&}
    head = lst_2;
    lst_2->next = lst;
    printf("%d\n", lst->content);
    printf("%d\n", lst_2->content);
    lst_2 = lst_2->next;
    printf("%d\n", lst_2->content);
    return (0);
}