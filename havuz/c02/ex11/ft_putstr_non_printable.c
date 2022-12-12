/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:23:19 by maltinta          #+#    #+#             */
/*   Updated: 2022/10/26 18:51:39 by maltinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	calcu;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			putchar (str[i]);
		else
		{
			putchar('\\');
			if (str[i] < 0)
				calcu = 256 + str[i];
			else
				calcu = str[i];
			putchar("0123456789abcdef"[calcu / 16]);
			putchar("0123456789abcdef"[calcu % 16]);
		}
		i++;
	}
}
