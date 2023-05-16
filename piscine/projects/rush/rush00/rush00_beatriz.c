/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:41:14 by jode-jes          #+#    #+#             */
/*   Upda
    {ted: 2023/02/04 18:37:48 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar (char c) //ft_putchard function
{
    write (1, &c, 1);
}


void rush (int x, int y) //rush function
{   
    int count_lines; // line count (y) - we're descending the lines. going down the lines.

    count_lines = 1;

    int count_cols; // making the columns in each line...going from left to right in each line to built it.
              
    while (count_lines <= y) //starting the count (in this case the count lines)
    {
        count_cols = 1;
         if (count_lines == 1 || count_lines == y) //dealing with the first and last line
        {
            while(count_cols <= x) //starting the count (in this case the count columns, in the first and in the last line)
            {
                if(count_cols == 1 || count_cols == x) 
                {
                    ft_putchar('o');
                }
                else 
                {
                    ft_putchar('-');
                }
                count_cols++; // incrementing 1 in the loop in order to change to next column at the right - going left to right
            }
            ft_putchar('\n'); // line break. next line.
            count_lines++;
        }
        else if (count_lines > 1 || count_lines < y) // the lines in the middle. Between 2 (above 1 - the first one) and below the last one (y)
        {
            while(count_cols <= x) //starting the count (in this case the count columns, in the middle, ie, after the 1st line and before the last line)
            {
                if(count_cols == 1 || count_cols == x)
                {
                    ft_putchar('|');
                } 
                else 
                {
                    ft_putchar(' ');
                }
                count_cols++;
            }
            ft_putchar('\n');         
            count_lines++;
        }    
    }
}
    
   
int main(void) // main function
{
    rush(5,3);
    return (0);
}