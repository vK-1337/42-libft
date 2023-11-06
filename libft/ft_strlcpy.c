/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:06:34 by vk                #+#    #+#             */
/*   Updated: 2023/10/30 11:40:29 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
int i;
if (!dst || !src || size == 0)
  return (0);
i = 0;
while (src[i] && i < size - 1)
{
  dst[i] = src[i];
  i++;
}
dst[i] = '\0';
return (i);
}
