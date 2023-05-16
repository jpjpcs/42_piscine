/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:41:58 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/15 13:08:02 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int	ft_str_is_numeric(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main()
{	
	char	str[] = " alma";
	printf("%d", ft_str_is_numeric(str));
	return (0);
}*/
