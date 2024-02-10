/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 04:24:18 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/10 11:16:32 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find2nd(t_list *stack)
{
	int		max;
	int		second;
	t_list	*cpy;

	max = findmax(stack);
	second = INT_MIN;
	cpy = stack;
	while (cpy)
	{
		if (cpy->content > second && cpy->content != max)
			second = cpy->content;
		cpy = cpy->next;
	}
	return (second);
}

int	findmax(t_list *stack)
{
	t_list	*cpy;
	int		max;

	cpy = stack;
	max = INT_MIN;
	while (cpy)
	{
		if (cpy->content > max)
			max = cpy->content;
		cpy = cpy->next;
	}
	return (max);
}
