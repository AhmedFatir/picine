/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:42:36 by afatir            #+#    #+#             */
/*   Updated: 2022/09/12 16:23:41 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while (i <= 46340)
	{
		if ((i * i) == nb)
			return (i);
	i++;
	}
	return (0);
}
