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
	return (0);
}