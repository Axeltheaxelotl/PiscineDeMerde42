/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:13:26 by alanty            #+#    #+#             */
/*   Updated: 2024/01/14 13:00:58 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N\n", 1);
	}
	else
	{
		write(1, "P\n", 1);
	}
}
/*
int main()
{
	int number;
	number = 1;
	ft_is_negative(number);
	
	return 0;
}
*/
