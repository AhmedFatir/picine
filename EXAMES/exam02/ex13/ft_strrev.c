/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:56:18 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:56:19 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	start;
	int	end;
	char	tmp;

	start = 0;
	end = 0;
	while (str[end + 1])
		end++;
	while (start < end)
	{
		tmp = str[start];
		str[start++] = str[end];
		str[end--] = tmp;
	}
	return (str);
}
