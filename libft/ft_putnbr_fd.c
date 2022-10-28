/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 06:32:05 by yismaail          #+#    #+#             */
/*   Updated: 2022/10/26 21:57:28 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n >= 0 && n < 10)
	{
		n += 48;
		write (fd, &n, 1);
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
#include <fcntl.h>
int main () {
	// FILE *p = fopen("yassir.txt", "w");
	// int fd = fileno(p);
	// ft_putnbr_fd(35684, fd);
	int fd = open("cv.txt", O_CREAT | O_WRONLY, 0777);
	ft_putnbr_fd(2525, fd);
}