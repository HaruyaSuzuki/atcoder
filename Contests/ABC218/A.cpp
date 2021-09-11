/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:21:39 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/09/11 21:21:40 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <iostream>

using namespace std;

int		main(void)
{
	int			N;
	string	S;

	cin >> N;
	cin >> S;

	if (S[N - 1] == 'o') cout << "Yes";
	else if (S[N - 1] == 'x') cout << "No";

	return (0);
}