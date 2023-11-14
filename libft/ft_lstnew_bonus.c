/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:13:42 by vk                #+#    #+#             */
/*   Updated: 2023/11/12 22:23:17 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list *ft_lstnew(void *content)
{
  t_list *new_node;

  new_node = malloc(sizeof(t_list));
  new_node->content = content;
  new_node->next = NULL;
  return (new_node);
}
