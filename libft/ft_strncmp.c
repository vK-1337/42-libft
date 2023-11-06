/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:28:21 by vk                #+#    #+#             */
/*   Updated: 2023/11/05 11:30:55 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp( const char * first, const char * second, size_t length )
{
  int cmp_count;
  size_t i;

  if (!first || !second)
    return (0);
  i = 0;
  cmp_count = 0;
  while ( i < length)
  {
    cmp_count += (first[i] - second[i]);
    i++;
  }
  return (cmp_count);
}
