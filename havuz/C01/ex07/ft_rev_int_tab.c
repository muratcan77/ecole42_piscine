/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:44:13 by maltinta          #+#    #+#             */
/*   Updated: 2022/10/23 18:12:32 by maltinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rev_int_tab(int *tab, int size)
{
	int	swp;
	int	i;

	i = 0;
	while (i <= (size / 2))
	{
	swp = tab[i];
	tab[i] = tab[size - 1 - i];
	tab[size - 1 - i] = swp;
i++;
	}
}
