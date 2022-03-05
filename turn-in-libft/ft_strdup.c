/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmariano <tmariano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:26:08 by tmariano          #+#    #+#             */
/*   Updated: 2022/03/02 20:08:54 by tmariano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char			*result;
	unsigned int	size;

	size = ft_strlen(s) + 1;
	result = malloc(size);
	if (result == NULL)
		return (result);
	ft_strlcpy(result, s, size);
	return (result);
}
