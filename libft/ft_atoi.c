/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:30:20 by yismaail          #+#    #+#             */
/*   Updated: 2022/10/25 23:43:43 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_max(int nbr, int signe)
{
	unsigned long long	nb;

	nb = nbr;
	if (nb >= 9223372036854775807 && signe == -1)
		return (0);
	if (nb >= 9223372036854775807)
		return (-1);
	return (nb);
}

int	ft_atoi(const char *str)
{
	char				*sttr;
	unsigned long long	i;
	int					signe;
	unsigned long long	nbr;

	i = 0;
	signe = 1;
	nbr = 0;
	sttr = (char *)str;
	while ((sttr[i] >= 9 && sttr[i] <= 13) || sttr[i] == ' ')
		i++;
	if (sttr[i] == '-' || sttr[i] == '+')
	{
		if (sttr[i] == '-')
			signe *= -1;
		i++;
	}
	while (ft_isdigit(sttr[i]) == 1)
	{
		nbr = nbr * 10 + (sttr[i++] - 48);
	}
	check_max(nbr, signe);
	return (nbr * signe);
}
