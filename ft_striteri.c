/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olachgue <olachgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:47:23 by olachgue          #+#    #+#             */
/*   Updated: 2024/11/12 11:19:25 by olachgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <libc.h>
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	while (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(f)(i, &s[i]);
		i++;
	}
}
// void toolower(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && (c[i] >= 'A' && c[i] <= 'Z'))
// 	{
// 		c[i] = c[i] + 32;
// 	}

// }

// int main()
// {
	
// 	char s[] = "HEgfLLO WORDL";
// 	ft_striteri(s, toolower);
// 	printf("%s\n", s);
// }