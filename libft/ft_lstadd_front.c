/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:29:22 by yismaail          #+#    #+#             */
/*   Updated: 2023/03/07 17:29:57 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return (NULL);
    if (!lst)
    {
        *lst = new;
        return ;
    }
    new->next = *lst;
    *lst = new;
}
