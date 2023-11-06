/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:20:02 by vk                #+#    #+#             */
/*   Updated: 2023/11/05 19:21:35 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
  size_t i;

  i = 0;
  while (i < n)
  {
    *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
    i++;
  }
  return (dst);
}
