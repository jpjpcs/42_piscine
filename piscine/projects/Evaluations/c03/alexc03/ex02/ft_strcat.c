/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto-d <apinto-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:24:31 by apinto-d          #+#    #+#             */
/*   Updated: 2023/02/18 15:49:36 by apinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include<stdio.h>
#include <string.h>
int	main(void)
 {
 	char	dest[] = "deststring";
	char	src[] = "sourcestring";

	printf("%s \n", ft_strcat(dest, src));
	printf("original: %s \n", strcat (dest, src));
	return (0);
}
