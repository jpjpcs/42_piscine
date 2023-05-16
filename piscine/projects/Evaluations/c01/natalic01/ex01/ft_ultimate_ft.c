/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nados-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:07:18 by nados-sa          #+#    #+#             */
/*   Updated: 2023/02/20 12:37:06 by nados-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*int	main(void)
{
	int	num;
	int	*nbr;
	int	**nbr2;
	int	***nbr3;
	int	****nbr4;
	int	*****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int	********nbr8;
	int	*********nbr9;

	num = 2;
	nbr = &num;
	nbr2 = &nbr;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;

	printf("O conteudo da var num: %d (%p)\n", num, &num);
	ft_ultimate_ft(nbr9);
	printf("Primeiro ponteiro: %d (%p)\n", *nbr, &nbr);	
	printf("Segundo ponteiro: %d (%p)\n", **nbr2, &nbr2);
	printf("Terceiro ponteiro: %d (%p)\n", ***nbr3, &nbr3);
	printf("Quarto ponteiro: %d (%p)\n", ****nbr4, &nbr4);
	printf("Quinto ponteiro: %d (%p)\n", *****nbr5, &nbr5);
	printf("Sexto ponteiro: %d (%p)\n", ******nbr6, &nbr6);
	printf("Setimo ponteiro: %d (%p)\n", *******nbr7, &nbr7);
	printf("Oitavo ponteiro: %d (%p)\n", ********nbr8, &nbr8);
	printf("Nono ponteiro: %d (%p)\n", *********nbr9, &nbr9);
}*/
