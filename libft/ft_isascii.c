/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vk <vk@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:29:25 by vk                #+#    #+#             */
/*   Updated: 2023/10/25 09:21:01 by vk               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isascii(int c)
{
  return (c >= 0 && c <= 255) ? 1 : 0;
}