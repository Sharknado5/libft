/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkoekemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 21:44:31 by lkoekemo          #+#    #+#             */
/*   Updated: 2016/11/01 11:23:46 by lkoekemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
		size_t		i;

		i = 0;
		if (src < dest)
		{
				i = n;
				while (i > 0)
				{
						i--;
						((char *)dest)[i] = ((char *)src)[i];
				}
		}
		else
		{
				while (i < n)
				{
						((char *)dest)[i] = ((char *)src)[i];
						i++;
				}
		}
		return (dest);
}
