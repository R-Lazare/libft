/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluiz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:26:58 by rluiz             #+#    #+#             */
/*   Updated: 2023/04/16 17:57:20 by rluiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(const int c)
{
	return (c >= 32 && c <= 126);
}
