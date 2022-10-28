/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:05:51 by yismaail          #+#    #+#             */
/*   Updated: 2022/10/26 03:49:03 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wd_count(const char *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			k++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	if (k)
		return (k);
	return (1);
}

static void	ft_inc(const char *s, int *arr0, int *arr1, char c)
{
	while (s[*arr0] && s[*arr0] != c)
	{
		*arr0 += 1;
		*arr1 += 1;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**aldynamic;
	int		l;
	int		*arr;

	arr = malloc(sizeof(int) * 3);
	arr[0] = 0;
	l = 0;
	if (!s)
		return (NULL);
	aldynamic = malloc((wd_count(s, c) + 1) * sizeof(char *));
	while (s[arr[0]])
	{
		if (s[arr[0]] == c)
			arr[0]++;
		else
		{
			arr[2] = arr[0];
			arr[1] = 0;
			ft_inc(s, &arr[0], &arr[1], c);
			aldynamic[l++] = ft_substr(s, arr[2], arr[1]);
		}
	}
	aldynamic[l] = NULL;
	free(arr);
	return (aldynamic);
}
