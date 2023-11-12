/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:06:26 by vk                #+#    #+#             */
/*   Updated: 2023/11/12 18:56:11 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// FAIRE UNE FONCTION IS NEG POUR SIMPLIFIER L'ENSEMBLE

size_t ft_nbrlen(long n)
{
  size_t i;
  i = 0;
  if (n == 0)
    return (1);
  while (n >= 1)
  {
    n /= 10;
    i++;
  }
  return (i);
}

char *ft_itoa(int n)
{
  size_t len;
  char *number;
  long nbr;

  nbr = n;
  if (n < 0)
    nbr *= -1;
  len = ft_nbrlen(nbr);
  if (n < 0)
    number = malloc((len + 2) * sizeof(char));
  else
    number = malloc((len + 1) * sizeof(char));
  if (!number)
    return (NULL);
  if (n < 0)
  {
    number[0] = '-';
    number[len + 2] = '\0';
  }
  else
    number[len + 1] = '\0';
  while (len > 0)
  {
    if (n >= 0)
      number[(len--) - 1] = ((nbr % 10) + '0');
    else
      number[(len--)] = ((nbr % 10) + '0');
    nbr /= 10;
  }
  return (number);
}
int main()
{
  int intmax = 0;
  char *p = ft_itoa(intmax);
  printf("Le retour de la fonction itoa est : %s", p);
}
