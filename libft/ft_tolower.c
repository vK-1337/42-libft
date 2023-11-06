/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:27:48 by vk                #+#    #+#             */
/*   Updated: 2023/10/19 11:16:42 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int character)
{
  if (character >= 65 && character <= 90)
  {
    character += 32;
    return (1);
  }
  return(0);
}