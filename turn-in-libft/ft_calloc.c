/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <talita.hs.mariano@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:16:14 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/05 01:36:24 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	size_t			length;
	void			*result;

	length = nmenb * size;
	result = malloc(length);
	if (result == NULL)
		return (result);
	ft_bzero(result, length);
	return (result);
}
