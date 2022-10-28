/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:03:08 by yismaail          #+#    #+#             */
/*   Updated: 2022/08/06 19:07:06 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	n;

	n = index;
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1 || n == 2)
		return (1);
	else
		return (ft_fibonacci(n - 1) + ft_fibonacci(n - 2));
}
