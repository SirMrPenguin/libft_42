/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:46:44 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/09 18:47:50 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*((unsigned char *)s + n) = 0;
}
/*
#include <stdio.h>
int	main(){
	char arr[] = "Hello!";
	ft_bzero(arr, 3);
	printf("%s\n", arr);	
}*/
