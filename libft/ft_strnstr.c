/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:36:01 by vk                #+#    #+#             */
/*   Updated: 2023/11/05 15:16:45 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strnstr(const char *big,	const char *little, size_t len)
{
  size_t i;
  size_t j;
  size_t k;

  if (!little || !big)
    return (NULL);
  if (ft_strlen(little) == 0)
    return ((char *) big);
  i = 0;
  while (big[i] && i < len)
  {
    if (big[i] == little[0])
    {
      j = 0;
      k = i;
      while (big[k] == little[j] && little[j] && (i + j < len))
      {
        j++;
        k++;
      }
      if (!little[j])
        return ((char *) big + i);
    }
    i++;
  }
  return (NULL);
}
