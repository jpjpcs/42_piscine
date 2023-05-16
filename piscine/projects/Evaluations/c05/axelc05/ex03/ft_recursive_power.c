/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <achabrer@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:15:12 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/14 12:52:28 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0 && nb == 0)
		return (1);
	else if (power < 1)
	{
		return (1);
	}
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
