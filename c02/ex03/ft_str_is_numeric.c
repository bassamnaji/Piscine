/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:15:41 by bnaji             #+#    #+#             */
/*   Updated: 2021/05/25 19:16:11 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int c;

	c = 1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
		}
		else
		{
			c = 0;
		}
		str++;
	}
	return (c);
}