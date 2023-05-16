/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:24:36 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/23 17:46:52 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int len (char *string)
{
    printf("string: %s", string);
    int i = 0;
    while (string[i] != '\0')
    {   
        printf("%c \n ", string[i]);
        i++;
    }
    printf("i :%d \n", i);
    return (i);
}
char *ft_rev_print (char *str)
{   
    int length = len (str);
    //printf("%d", length);

    while (length > 0)
    {
        //write (1, &str[length], 1);
        length--;
    }
    return (str);
}

int main()
{   
    char str[] = "dub0 a POIL";
    ft_rev_print(str);
    return (0);    

}