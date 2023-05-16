/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:31:06 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/09 22:39:27 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count <= (size / 2))
	{
		temp = tab[count];
		tab [count] = tab [size - 1];
		tab [size - 1] = temp;
		count++;
		size--;
	}
}

int main()
{	            
	int l [] = {1, 10, 35, 48};
	int s = 4;

	ft_rev_int_tab( l, s);
	printf("new list is %d %d %d %d", l[0], l[1], l[2], l[3]);
	return (0);
}
