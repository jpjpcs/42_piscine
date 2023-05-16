/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgracio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:56:05 by jgracio-          #+#    #+#             */
/*   Updated: 2023/02/19 16:56:15 by jgracio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
 #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int main(void)
 {
 	char 	a[] = "lemon";
 	char	b[] = "limao";
 	ft_strcat(a, b);
 	printf("%s\n", a);
 	return(0);
 }
