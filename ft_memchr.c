/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachgue <olachgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:30:24 by olachgue          #+#    #+#             */
/*   Updated: 2024/11/13 11:56:00 by olachgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char )c)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
#include <libc.h>
int main()
{
	int i = 1337;
	void *res = ft_memchr(&i, 5, 4);
	printf("%p\n", (unsigned char *)res);
}