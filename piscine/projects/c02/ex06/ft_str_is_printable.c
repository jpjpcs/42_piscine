/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:26:12 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/18 18:09:26 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] > 31 && str[i] < 127)
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

/*int main()
{
	char	str[] = "!";
	printf("%d", ft_str_is_printable(str));
	return (0);
}*/
