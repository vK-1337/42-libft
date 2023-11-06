/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:21:44 by vk                #+#    #+#             */
/*   Updated: 2023/10/19 11:18:00 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int character)
{
  if (character >= 97 && character <= 122)
  {
    character -= 32;
    return (1);
  }
  return(0);
}
