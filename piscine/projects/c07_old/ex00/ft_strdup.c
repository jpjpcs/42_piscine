/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:53:47 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/21 17:51:37 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>

int	len(char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*array;

	i = 0;
	array = (char *)malloc(sizeof(char) * len(src) + 1);
	if (array == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

/*int	main(void)
{
	char	src[] = "Hello";
	char	*dest;
	dest = ft_strdup(src);
	printf("%s", dest);
	free(dest);
	return (0);
}*/
