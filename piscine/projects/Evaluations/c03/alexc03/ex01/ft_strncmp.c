/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto-d <apinto-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:47:47 by apinto-d          #+#    #+#             */
/*   Updated: 2023/02/19 11:38:05 by apinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

#include<stdio.h>
int	main(void)
{
 	unsigned int	n = 7;
 	char	s1[] = "12345678";
 	char	s2[] = "123456";

 	printf("%i \n", ft_strncmp(s1, s2, n));
 	return (0);
}
