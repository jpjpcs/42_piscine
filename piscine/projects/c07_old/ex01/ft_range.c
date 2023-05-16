/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:53:42 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/22 14:40:40 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>

int *ft_range(int min, int max)
{
	int *tab;
	if (min < max)
	{
		int i;

		i = 0;
		tab = (int *)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
		return (tab);
	}
	else
	{
		return (NULL);
	}
}

int main()
{
	int min = 1;
	int max = 10;
	int *list = ft_range(min, max);
	int length = max - min;
	int i = 0;
	while ((length) > i)
	{
		printf("%d", list[i]);
		i++;
	}
	free(list);
	return (0);
}
