/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:16:21 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/02/18 19:52:13 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] < '0' || str[i - 1] > '9')
				&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < 'a' || str[i - 1] > 'z'))
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char str1[] = "ola, TUDO bem? 42palavras e quarenta-e-duas; lagrimas+grito";
	int	cont;

	cont = 0;
	ft_strcapitalize(str1);
	while(str1[cont] != '\0')
	{
		write(1, &str1[cont], 1);
		cont++;
	}
}
