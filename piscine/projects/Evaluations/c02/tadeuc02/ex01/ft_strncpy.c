/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:51:49 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/02/17 12:29:09 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
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

/*int	main(void)
{
	char	str1[] = "Testando";
	char	str2[] = "";
	char	str3[] = "Testando";
	char	str4[] = "";
	unsigned int	b;

	b = 4;
	printf("Minha function    : %s\n",ft_strncpy(str2,str1,b));
	printf("STRNCPY de verdade: %s\n",strncpy(str4,str3,b));
	return (0);
}*/
