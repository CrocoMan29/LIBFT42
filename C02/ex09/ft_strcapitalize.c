/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:36:46 by yismaail          #+#    #+#             */
/*   Updated: 2022/08/01 20:40:00 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bool;

	bool = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (bool == 1 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (bool != 1 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')))
			bool = 1;
		else
			bool = 0;
		i++;
	}
	return (str);
}
