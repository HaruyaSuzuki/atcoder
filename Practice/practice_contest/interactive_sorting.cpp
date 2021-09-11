/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interactive_sorting.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:00:02 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/09/11 20:41:48 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <iostream>

using namespace std;

int		main(void)
{
	int	n, j, k;

	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> j >> k;
	}
}