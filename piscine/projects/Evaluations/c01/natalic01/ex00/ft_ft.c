/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nados-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:55:36 by nados-sa          #+#    #+#             */
/*   Updated: 2023/02/20 12:36:14 by nados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int	num;
	int	*nbr;

	num = 2;
	nbr = &num;
	printf("O conteudo da var num: %d\n", num);
	ft_ft(nbr);
	printf("Apos ser modificado atraves do ponteiro: %d\n", num);
	printf("O conteudo do ponteiro: %d\n", *nbr);
}*/
