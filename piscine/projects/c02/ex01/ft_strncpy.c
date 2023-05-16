/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:59:13 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/14 16:08:04 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main()
{
	char source[] = "Hello";
	unsigned int n = 3;
	char destination[] = "caiowow";
	
	//ft_strncpy(destination, source, n);
	
	//printf("original %s \n", strncpy(destination, source, n));
	printf("mine %s \n", ft_strncpy(destination, source, n));
	return (0);
}*/
