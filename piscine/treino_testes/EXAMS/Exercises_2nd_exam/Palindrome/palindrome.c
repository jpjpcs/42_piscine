/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:34:45 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/23 19:04:17 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int calc_size (char *src)
{
	int size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	return (size);
}

void palindrome(char *pal)
{	
	int size = calc_size (pal);
	int count = 0;
	int i = 0;
	while (count <= (size / 2))
	{
		if(pal[count] == pal[size-1])
		{
			count++;
			size--;
		}
		else
		{
			write(1, "a", 2);
			return;
		}
	}
	while (pal[i] != '\0')
	{
		write(1, &pal[i], 1);
        i++;
	}
}

int main()
{
	char str[] = "boarob";
	palindrome (str);
	return (0); 
}


