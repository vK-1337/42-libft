/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:30:09 by vk                #+#    #+#             */
/*   Updated: 2023/11/05 17:36:27 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void * ft_memset(void * pointer, int value, size_t count)
{
  size_t i;
  unsigned char *p;
  unsigned char set_value;

  set_value = value;
  p = pointer;
  i = 0;
  while (i < count)
  {
    p[i] = set_value;
    i++;
  }
  return (p);
}
