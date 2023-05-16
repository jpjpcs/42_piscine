/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgracio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:32:42 by jgracio-          #+#    #+#             */
/*   Updated: 2023/02/19 19:32:46 by jgracio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include <stdio.h>
 #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
 int main(void)
 {
 	char	haystack[] = "escola ou nao";
	char	needle[] = "cola";
 	char	*findit;
 	findit = ft_strstr(haystack, needle);
 	printf("needle = %s\n", findit);
 }
