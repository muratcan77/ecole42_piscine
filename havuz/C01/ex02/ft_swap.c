/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:32:56 by maltinta          #+#    #+#             */
/*   Updated: 2022/10/22 16:45:01 by maltinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a,	int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
