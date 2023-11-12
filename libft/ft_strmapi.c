/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:37:10 by vk                #+#    #+#             */
/*   Updated: 2023/11/12 20:09:01 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlen (const char * str)
{
  int i;

  i = 0;
  while (str[i] && str[i + 1] && str[i + 2] && str[i + 3])
    i += 4;
  while (str[i])
    i++;
  return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  size_t i;
  char *newstr;

  newstr = malloc((ft_strlen(s) + 1) * sizeof(char));
  if (!newstr)
    return (NULL);
  i = 0;
  while (s[i])
  {
    newstr[i] = (*f)(i, s[i]);
    i++;
  }
  newstr[i] = '\0';
  return (newstr);
}
