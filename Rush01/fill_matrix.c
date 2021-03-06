/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:04:51 by dpetrosy          #+#    #+#             */
/*   Updated: 2022/02/13 21:51:57 by dpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_matrix(int arr[][5][5])
{
	int i;
	int j;
	int k;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			k = 0;
			while (k <= 4)
			{
				arr[i][j][k] = k;
				++k;
			}
			++j;
		}
		++i;
	}
}
