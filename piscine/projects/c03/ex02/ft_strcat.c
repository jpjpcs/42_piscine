/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:02:19 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/20 10:52:52 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int main ()
{
	char src [] = " World";
	char dest [] = "Hello";
	ft_strcat(dest, src);
	printf("mine: %s \n", dest);
	char src1 [] = " World";
	char dest2 [] = "Hello";
	printf("original: %s \n", strcat (dest2, src1));

	return (0);
}*/
