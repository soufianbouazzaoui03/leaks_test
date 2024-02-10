/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 04:24:18 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/10 10:03:57 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find2nd(t_list *stack)
{
	t_list	*max;
	t_list	*second;
	t_list	*cpy;

	max = findmax(stack);
	if(!max)
		return (NULL);
	second = ft_lstnew(INT_MIN);
	if(!second)
		return (NULL);
	cpy = stack;
	while (cpy)
	{
		if (cpy->content > second->content && cpy->content != max->content)
			second = cpy;
		cpy = cpy->next;
	}
	free(max);
	return (second);
}

t_list	*findmax(t_list *stack)
{
	t_list	*cpy;
	t_list	*max;

	cpy = stack;
	max = ft_lstnew(INT_MIN);
	if(!max)
		return (NULL);
	while (cpy)
	{
		if (cpy->content > max->content)
			max = cpy;
		cpy = cpy->next;
	}
	return (max);
}
