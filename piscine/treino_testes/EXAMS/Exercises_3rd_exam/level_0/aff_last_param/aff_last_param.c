/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:09:13 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/22 19:27:06 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc, char *argv[])
{   
   
    int j;
   
   if (argc == 1)
   {
   	write (1, "\n", 1);
   }
   
   while (argc > 1)
   {	
        j = 0;	 
	while (argv[argc-1][j] != '\0')
	{   
		//printf("%s", argv[argc - 1]);
		//printf("%d", argc);
		write (1, &argv[argc-1][j], 1);
		j++;
	}
	write (1, "\n", 1);
	argc--;     
   }
    
    return (0);
}
