/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:51:12 by gsmets            #+#    #+#             */
/*   Updated: 2019/10/09 19:18:37 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	char	next_n;

	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
		return ;
	}
	next_n = n / 10;
	while (n > 10)
		n /= 10;
	c = n + '0';
	write(fd, &c, 1);
	ft_putnbr_fd(next_n, fd);
}
