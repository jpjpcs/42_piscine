/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgracio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:55:36 by jgracio-          #+#    #+#             */
/*   Updated: 2023/02/18 16:55:39 by jgracio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
 #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
int main()
{ 	char str1[] = "bb";
 	char str2[] = "bb";
	unsigned int n;
	n = 2;
	printf("Result: %d", ft_strncmp(str1, str2, n));
	return(0);
 }
