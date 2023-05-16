/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:19:17 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/14 20:01:03 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int     main()
{
        char alpha[] = "";
        ft_str_is_alpha(alpha);
        printf("%d", ft_str_is_alpha(alpha));
}*/
