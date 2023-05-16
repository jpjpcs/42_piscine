/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:33:37 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/02/18 11:39:57 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	frase1[] = "123123123123123121";
	char	frase2[] = "123213123 1231231231";
	char	frase3[] = "123123123l123l123p13o";
	char	frase4[] = "674655465434788906543";
	int	retorno;

	
	retorno = ft_str_is_numeric(frase1);
	printf("Retorno da frase1: %d\n", retorno);
	retorno = ft_str_is_numeric(frase2);
	printf("Retorno da frase2: %d\n", retorno);
	retorno = ft_str_is_numeric(frase3);
	printf("Retorno da frase3: %d\n", retorno);
	retorno = ft_str_is_numeric(frase4);
	printf("Retorno da frase4: %d\n", retorno);
	return (0);
}*/
