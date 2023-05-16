/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:55:37 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/20 11:14:01 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* int main ()
{
	char src [] = "World";
	char dest [] = "Hello";
    unsigned int n = 6;
	ft_strncat(dest, src, n);
	printf("mine: %s \n", dest);
	char src1 [] = "World";
	char dest1 [10] = "Hello";
    unsigned int n1 = 6;
	printf("original: %s \n", strncat (dest1, src1, n1));
	return (0);
} */