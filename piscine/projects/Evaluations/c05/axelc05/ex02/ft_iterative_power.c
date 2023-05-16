/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <achabrer@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:02:26 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/18 11:13:30 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0 && nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	while ((power - 1) > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
