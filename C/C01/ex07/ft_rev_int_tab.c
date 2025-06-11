/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:48:55 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/03 13:03:44 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temporaria;
	int	i;
	int	f;

	i = 0;
	f = size -1;
	while (i < f)
	{
		temporaria = tab[i];
		tab[i] = tab[f];
		tab[f] = temporaria;
		i++;
		f--;
	}
}

// int	main(void)
// {
// 	int	arr[] = {1,2,3,4,5};
// 	int	size = 5;
// 	int	i;

// 	ft_rev_int_tab(arr, size);

// 	for ( i = 0; i < size; i++)
// 	printf ("%d ", arr[i]);

// 	return(0);
// }