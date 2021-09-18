#pragma GCC target("avx2")
#pragma GCC optimize("O3")

#include <iostream>

using namespace std;

int		main(void)
{
	int	X;

	cin >> X;
	if (0 <= X && X < 40) cout << 40 - X;
	else if (40 <= X && X < 70) cout << 70 - X;
	else if (70 <= X && X < 90) cout << 90 - X;
	else if (90 <= X) cout << "expert";
	return (0);
}