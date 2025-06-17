/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hda-silv <hda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:32:59 by hda-silv          #+#    #+#             */
/*   Updated: 2025/06/16 14:42:07 by hda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// char *ft_strstr(char *str, char *to_find);
// int main() {
//     char texto[] = "programado C";
// 	char textto2[] = "g";
//     char *resultado = ft_strstr(texto, textto2);
//     if (resultado)
//         printf("Encontrado: %s\n", resultado);
//     else
//         printf("Não encontrado\n");
//     return 0;
// }