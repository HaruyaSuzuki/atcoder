/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 21:47:46 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/09/26 21:47:47 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma GCC target("avx2")
#pragma GCC optimize("O3")

#include <iostream>

using namespace std;

int		main(void)
{
	int	a, b, c;

	cin >> a >> b >> c;

	int	i = c;
	while (i<=1000)
	{
		if (i >= a)
		{
			if (i <= b)
			{
				cout << i << endl;
				break;
			}
			if (i > b)
			{
				cout << -1;
				break;
			}
		}
		i += c;
	}
	return (0);
}