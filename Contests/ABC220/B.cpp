/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:05:31 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/09/26 23:08:41 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma GCC target("avx2")
#pragma GCC optimize("O3")

#include <iostream>
#include <string>

using namespace std;

size_t countDigits(int n)
{
	string tmp;

    tmp = to_string(n);
    return tmp.size();
}

int		main(void)
{
	int k, a, b, an, bn, ac, bc, ans_a, ans_b, d;
	string tmp;

	cin >> k;// 基数
	cin >> a >> b;// 基数の値の進法に基づいた2つの数値
	an = countDigits(a);// aの桁数
	bn = countDigits(b);// bの桁数
	ans_a = 0;
	ans_b = 0;

	// a, bの大きさ(2桁->10, 3桁->100, 4桁->1000, ...)
	ac = 1;
	for (int i=1; i<an; i++) ac *= 10;
	bc = 1;
	for (int i=1; i<bn; i++) bc *= 10;

	// aの桁の重み
	d = 1;
	for (int i=1;i<an;i++) d *= k;

	// 桁ごとの値に重みを掛け合わせる(一番大きい桁から)
	/*
	** n進数->10進数: 10真数の値 = ... + [10の位の値] * [10の位の重み] + [1の位の値] * [1の位の重み]
	*/
	while (ac > 0)
	{
		ans_a += d * (a / ac);
		a %= ac;
		ac /= 10;
		d /= k;
	}

	// bの桁の重み
	d = 1;
	for (int i=1;i<bn;i++) d *= k;

	// 桁ごとの値に重みを掛け合わせる(一番大きい桁から)
	while (bc > 0)
	{
		ans_b += d * (b / bc);
		b %= bc;
		bc /= 10;
		d /= k;
	}

	cout << ans_a * ans_b << endl;
	return (0);
}