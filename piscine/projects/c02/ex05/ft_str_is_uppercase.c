/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:27:39 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/15 13:35:33 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main()
{
	char	str[] = "aAbs";
	printf("%d", ft_str_is_uppercase(str));
	return (0);
}*/
