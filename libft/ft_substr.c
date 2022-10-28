/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:40:39 by yismaail          #+#    #+#             */
/*   Updated: 2022/10/25 23:46:19 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*aldynamic;
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	aldynamic = (char *)malloc(len + 1);
// 	if (!aldynamic)
// 		return (NULL);
// 	if (start >= ft_strlen(s))
// 	{
// 		aldynamic[0] = '\0';
// 		return (ft_strdup(""));
// 	}
// 	i = 0;
// 	while (i < len && s[start + i])
// 	{
// 		aldynamic[i] = s[start + i];
// 		i++;
// 	}
// 	aldynamic[len] = '\0';
// 	return (aldynamic);
// }
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*dup;

	str = (char *)s;
	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	if (len > ft_strlen(str + start))
	{
		dup = malloc(ft_strlen(str + start) + 1);
		len = ft_strlen(str + start);
	}
	else
		dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, str + start, len + 1);
	return (dup);
}
