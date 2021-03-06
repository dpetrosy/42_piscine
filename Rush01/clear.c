/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 05:38:29 by dpetrosy          #+#    #+#             */
/*   Updated: 2022/02/13 21:54:02 by dpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	clear_nums(int matrix[][5][5], int i, int j, int num)
{
	int k;

	k = 1;
	while (k <= 4)
	{
		matrix[i][j][k] = 0;
		++k;
	}

	k = 1;
	while (k <= 4)
	{
		matrix[k][j][num] = 0;
		++k;
	}
	k = 1;
	while (k <= 4)
	{
		matrix[i][k][num] = 0;
		++k;
	}
}
