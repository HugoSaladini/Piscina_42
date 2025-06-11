/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 23:28:41 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/03 13:02:57 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	div = *a / *b;
	res = *a % *b;
	*a = div;
	*b = res;
}

// int	main(void)
// {
// 	int a = 10;
// 	int b = 3;

// 	ft_ultimate_div_mod(&a, &b);

// 	printf("resultado da div: %d\n", a);
// 	printf("resultado da rest: %d\n", b);
// 	return(0);

// }