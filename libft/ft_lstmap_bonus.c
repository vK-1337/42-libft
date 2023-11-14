/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:16:07 by vk                #+#    #+#             */
/*   Updated: 2023/11/13 13:16:28 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list* new;
  t_list* new_head;

  if (!lst)
    return (NULL);
  while (lst != NULL)
  {
    new = ft_lstnew(f(lst->content));
    if (!new)
    {
      ft_lstclear(&new_head, (*del));
      return (NULL);
    }
    ft_lstadd_back(&new_head, new);
    lst = lst->next;
  }
  return (new_head);
}
