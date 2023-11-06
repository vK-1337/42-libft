/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:35:50 by vk                #+#    #+#             */
/*   Updated: 2023/10/02 09:41:59 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr( const char * string, int searchedChar )
{
  int i;

  i = 0;
  while(string[i])
  {
    if (string[i] == searchedChar)
      return (string[i]);
    i++;
  }
  return ((void *) NULL);
}
