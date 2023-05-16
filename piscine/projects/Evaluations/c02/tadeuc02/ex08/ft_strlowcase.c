/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:33:37 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/02/19 11:20:36 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	frase1[] = "azinho\n";
	char	frase2[] = "AZAO\n";
	char	frase3[] = "zAzCzVo\n";
	char	frase4[] = "";
	unsigned long	index;

	index = 0;
	ft_strlowcase(frase1);
	ft_strlowcase(frase2);
	ft_strlowcase(frase3);
	ft_strlowcase(frase4);

	while (index < sizeof(frase1))
	{
		write(1, &frase1[index], 1);
		index++;
	}
	index = 0;
	while (index < sizeof(frase2))
        {
                write(1, &frase2[index], 1);
                index++;
        }
	index = 0;
	while (index < sizeof(frase3))
        {
                write(1, &frase3[index], 1);
                index++;
        }
	index = 0;
	while (index < sizeof(frase4))
        {
                write(1, &frase4[index], 1);
                index++;
        }
	return (0);
}
