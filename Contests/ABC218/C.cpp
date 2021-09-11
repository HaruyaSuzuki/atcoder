/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:45:21 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/09/11 22:45:22 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <iostream>

using namespace std;

char* is_match(int N) {
	int		N;
	int 	i, j;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			if (gridS[i][j] != gridT[i][j])
			{
				cout << "No";
				return 
			}
			j++;
		}
		cout << '\n';
		i++;
	}
}

int		main(void)
{
	int		N;
	int 	i, j;

	cin >> N;
	char		grid[N][N];// = {
	//	{'#', '#', '.'},
	//	{'#', '.', '.'},
	//	{'#', '#', '.'}
	//};
	char		gridS[N][N];
	char		gridT[N][N];

	// S
	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			cin >> gridS[i][j];
			j++;
		}
		cout << '\n';
		i++;
	}

	// T
	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			cin >> gridT[i][j];
			j++;
		}
		cout << '\n';
		i++;
	}

	//// Out S
	//i = 0;
	//while (i < N)
	//{
	//	j = 0;
	//	while (j < N)
	//	{
	//		cout << gridS[i][j];
	//		j++;
	//	}
	//	cout << '\n';
	//	i++;
	//}

	////Out T
	//i = 0;
	//while (i < N)
	//{
	//	j = 0;
	//	while (j < N)
	//	{
	//		cout << gridT[i][j];
	//		j++;
	//	}
	//	cout << '\n';
	//	i++;
	//}
	cout << is_match(N);
	return (0);
}