/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 19:51:42 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/03 13:02:46 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a = 5;
// 	int	b = 3;
// 	int	div, mod;

// 	ft_div_mod(a, b, &div, &mod);

// 	printf("resultado: %d\n", div);
// 	printf("Modulo: %d\n", mod);

// 	return (0);
// }