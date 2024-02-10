/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:56:07 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/10 12:02:40 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*rtr;
	size_t			i;

	i = 0;
	rtr = (unsigned char *) b;
	while (i < len)
	{
		rtr[i] = (unsigned char) c;
		i++;
	}
	return ((void *)rtr);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptrcalloc;

	ptrcalloc = malloc(count * size);
	if (ptrcalloc == NULL)
		return (NULL);
	ft_memset(ptrcalloc, 0, count * size);
	return (ptrcalloc);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
