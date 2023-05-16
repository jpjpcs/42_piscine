/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:33:37 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/02/18 12:24:05 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	frase1[] = "azinho";
	char	frase2[] = "Azao";
	char	frase3[] = "azazao";
	char	frase4[] = "pegada";
	int	retorno;

	
	retorno = ft_str_is_lowercase(frase1);
	printf("Retorno da frase1: %d\n", retorno);
	retorno = ft_str_is_lowercase(frase2);
	printf("Retorno da frase2: %d\n", retorno);
	retorno = ft_str_is_lowercase(frase3);
	printf("Retorno da frase3: %d\n", retorno);
	retorno = ft_str_is_lowercase(frase4);
	printf("Retorno da frase4: %d\n", retorno);
	return (0);
}*/
