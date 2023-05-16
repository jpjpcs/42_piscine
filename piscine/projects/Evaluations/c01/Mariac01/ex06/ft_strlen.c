/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:17:01 by mteixeir          #+#    #+#             */
/*   Updated: 2023/02/17 11:23:19 by mteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l += 1;
	}
	return (l);
}

/*int	main(void)
{
	int	l;
	char	str[] = "hellano";
	l = ft_strlen(str);
	printf("%i", l);
	return (0);
}*/
