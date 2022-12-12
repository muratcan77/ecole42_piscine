/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:09:10 by maltinta          #+#    #+#             */
/*   Updated: 2022/10/26 19:09:17 by maltinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>



int main()
{
	printf("%s",ft_isalpha(t));
}

int	ft_isalpha(char x)
{

		if ((x >= 'A' && x <= 'Z')
			|| (x >= 'a' && x <= 'z'))
			return 1;
		
		return 0;
}
