/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:33:37 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/02/18 12:38:04 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	frase1[] = "az\ninho";
	char	frase2[] = "AZAO";
	char	frase3[] = "azazao";
	char	frase4[] = "";
	int	retorno;

	
	retorno = ft_str_is_printable(frase1);
	printf("Retorno da frase1: %d\n", retorno);
	retorno = ft_str_is_printable(frase2);
	printf("Retorno da frase2: %d\n", retorno);
	retorno = ft_str_is_printable(frase3);
	printf("Retorno da frase3: %d\n", retorno);
	retorno = ft_str_is_printable(frase4);
	printf("Retorno da frase4: %d\n", retorno);
	return (0);
}*/
