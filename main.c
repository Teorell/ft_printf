/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 11:38:49 by lsandor-          #+#    #+#             */
/*   Updated: 2019/01/29 12:44:52 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	printf("HELLO WORLD\n");
	ft_printf("FT: HELLO WORLD\n");
	printf("'%5%'\n");
	ft_printf("'%5%'\n");
	return (0);
}