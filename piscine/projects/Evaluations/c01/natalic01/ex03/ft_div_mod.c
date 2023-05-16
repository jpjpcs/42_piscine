/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nados-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:57:51 by nados-sa          #+#    #+#             */
/*   Updated: 2023/02/20 12:38:14 by nados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	gd;
	int	gm;
	int	*prt1;
	int	*prt2;
	
	prt1 = &gd;
	prt2 = &gm;
	a = 20;
	b = 4;
	ft_div_mod(a, b, prt1, prt2);
	printf("%d %d\n %d %d\n", a, b, *prt1, *prt2);
}*/
