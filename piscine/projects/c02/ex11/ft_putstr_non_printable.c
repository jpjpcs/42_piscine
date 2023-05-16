/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:28:17 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/18 18:48:01 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	conversion_dec_2_hex(unsigned char dec2convert)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[dec2convert / 16]);
	ft_putchar(base[dec2convert % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			write (1, &str[i], 1);
		}
		else
		{
			write (1, "\\", 1);
			conversion_dec_2_hex(str[i]);
		}
		i++;
	}
}

/*int	main()
{
	char	str[] = "Coucou\ntu \vvas \bbien\a ?";
	ft_putstr_non_printable(str);
	return (0);
}*/
