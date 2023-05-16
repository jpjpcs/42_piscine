/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:12:34 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/14 18:16:14 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size != 0)
	{
		while (src[j] && j < (size -1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

/*int	main()
{
	char source[] = "HelloWorld";
	unsigned int size = 0;
	char destination[] = "banana";
	ft_strlcpy(destination, source, size);
	printf("dest %s \n", destination);
	printf("src %s \n", source);
	printf("size %i \n", size);
	return (0);
}*/
