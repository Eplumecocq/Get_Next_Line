/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eplumeco <eplumeco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:12:44 by eplumeco          #+#    #+#             */
/*   Updated: 2015/12/09 12:21:48 by eplumeco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		result;
	int		sign;
	char	*pos;

	result = 0;
	sign = 0;
	pos = str;
	while (*pos == ' ' || *pos == '\t' || *pos == '\n' || *pos == '\v'
			|| *pos == '\f' || *pos == '\r')
		pos++;
	sign = (*pos == '-') ? -1 : 1;
	pos = (*pos == '+' || *pos == '-') ? pos + 1 : pos;
	while (*pos >= '0' && *pos <= '9')
	{
		result = (result * 10) + (*pos - 48);
		pos++;
	}
	return (sign * result);
}
