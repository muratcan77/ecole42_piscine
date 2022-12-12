/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:59:55 by maltinta          #+#    #+#             */
/*   Updated: 2022/10/22 21:39:14 by maltinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	while (size >= 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] < tab[i + 1])
			{
			swp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swp;
			}
			i++;
		}
		size--;
	}
}
