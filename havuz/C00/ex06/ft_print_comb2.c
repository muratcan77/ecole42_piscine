/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:54:11 by maltinta          #+#    #+#             */
/*   Updated: 2022/10/19 16:37:04 by maltinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar ('0' + (i / 10));
			ft_putchar ('0' + (i % 10));
			ft_putchar (' ');
			ft_putchar ((j / 10) + '0');
			ft_putchar ((j % 10) + '0');
			if (i != 98)
				write (1, ", ", 1);
			j++;
		}
				i++;
	}
}
