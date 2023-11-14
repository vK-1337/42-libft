/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:52:20 by vk                #+#    #+#             */
/*   Updated: 2023/11/13 13:15:24 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
  t_list *tmp;

  if (!lst || !(*lst) || !del)
    return;
  while (*lst != NULL)
  {
    tmp = (*lst)->next;
    lstdelone(*lst, del);
    lst = tmp;
  }
  (*lst) = NULL;
}
