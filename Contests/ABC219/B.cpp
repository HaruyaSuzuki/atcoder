/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 23:06:18 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/09/26 23:07:09 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <string>

using 		namespace std;

int				main(void)
{
	int			i;
	string 	s1, s2, s3, t, ans;

	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> t;
	for (i=0;i<t.length();i++)
	{
		if (t[i] == '1') ans += s1;
		else if(t[i] == '2') ans += s2;
		else if(t[i] == '3') ans += s3;
	}
	cout << ans;
	return (0);
}