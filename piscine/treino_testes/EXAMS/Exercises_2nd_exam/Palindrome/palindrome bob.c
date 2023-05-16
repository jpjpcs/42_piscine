/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome bob.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:14:41 by jode-jes          #+#    #+#             */
/*   Updated: 2023/02/17 08:48:03 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void palindrome(char *str, int size)
{    
    //printf("%d \n", size);
    //printf("%s \n", str);
    
    int i = 0;
    while (i <= size/2) //while (str[i] != '\0') 
    {

        if(str[i] == str[size-1])
        {
            i++;
            size--;
        } 
        else
        {
            printf("Nao e!");
            return;
        }   
    }
    
    i=0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }      
}

int main (void)
{
    int length = 1;
    char str[] = "b";
    palindrome(str, length);
    return(0);
}