/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:46:52 by alanty            #+#    #+#             */
/*   Updated: 2024/01/24 11:23:45 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	*p;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	p = malloc((max - min) * sizeof(int));
	if (p == 0)
	{
		return (0);
	}
	i = 0;
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
/*
#include <stdio.h>
int main()
{
    int *p;
    int i;
	i = 0;
    p = ft_range(0, 20);
    while (i < 20)
    {
        printf("%d ", p[i]);
        i++;
    }   
    free(p);
}
*/
