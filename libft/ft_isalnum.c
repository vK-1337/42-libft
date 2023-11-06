/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 08:43:15 by vk                #+#    #+#             */
/*   Updated: 2023/10/02 08:45:48 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
  if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
