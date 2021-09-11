/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:54:08 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/09/11 21:54:09 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <iostream>

using namespace std;

int		main(void)
{
	int		arr[26];
	int		ans;

	for (int i=0;i<26;i++)
	{
		cin >> arr[i];
	}
	for (int i=0;i<26;i++)
	{
		ans = arr[i] + 96;
		cout << char(ans);
	}
	return (0);
}