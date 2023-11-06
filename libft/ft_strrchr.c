/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:38:56 by vk                #+#    #+#             */
/*   Updated: 2023/10/02 09:41:16 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strrchr( const char * string, int searchedChar )
{
  int i;

  i = 0;
  while (string[i])
    i++;
  while (i >= 0)
  {
    if (string[i] == searchedChar)
      return (string[i]);
    i--;
  }
  return ((void *) NULL);
}
