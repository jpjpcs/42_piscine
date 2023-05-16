/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:33:37 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/02/18 11:32:38 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	frase1[] = "issoEhUmTesteBOM";
	char	frase2[] = "IssOEh1TesteFalh0";
	char	frase3[] = "OuTro+teste+falho";
	char	frase4[] = "FinalmenteUmTesteBom";
	int	retorno;

	
	retorno = ft_str_is_alpha(frase1);
	printf("Retorno da frase1: %d\n", retorno);
	retorno = ft_str_is_alpha(frase2);
	printf("Retorno da frase2: %d\n", retorno);
	retorno = ft_str_is_alpha(frase3);
	printf("Retorno da frase3: %d\n", retorno);
	retorno = ft_str_is_alpha(frase4);
	printf("Retorno da frase4: %d\n", retorno);
	return (0);
}*/
