/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:58:06 by vk                #+#    #+#             */
/*   Updated: 2023/11/13 11:01:21 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
  if (!lst || !f)
    return;
  while (lst->next != NULL)
  {
    (*f)(lst->content);
    lst = lst->next;
  }
  (*f)(lst->content);
}
