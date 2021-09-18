#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <string>

using namespace std;

// メモ (簡単なアルファベットの羅列)
//s(26, 'a');// 26の長さを持った文字が全てaの文字列で初期化
//for(i=0;i<=26;i++) s[i] = 'a' + i;// 'a'の文字コードからインクリメントしていく

int		main(void)
{
	int 					n;
	unsigned int	i, j;
	string 				s[1100];
	string				x, tmp;

	cin >> n;
	x = "bacdefghijklmnopqrstuvwxzy";

	for (i=0;i<26;i++)
	{
		for (j=0;j<n;j++) {
			if (x > s[n + 1])
			{
				tmp = s[i + 1];
				s[i + 1] = s[i];
				s[i] = s[i + 1];
			}
		}
	}

	for (i=0;i<n;i++) cin >> s[i];

	//for (j=0;j<n-1;j++)
	//{
	//	if (s[j] > s[j+1])
	//	{
	//		tmp = s[j];
	//		s[j] = s[j+1];
	//		s[j+1] = tmp;
	//	}
	//}

	for (i=0;i<n;i++) cout << s[i] << endl;
	return (0);
}

//int		main(void)
//{
//	int 					n;
//	unsigned int	i, j;
//	string 				s[110];
//	string				x;

//	cin >> n;

//	//cin >> x;
//	x = "bacdefghijklmnopqrstuvwxzy";

//	for (i=0;i<n;++i) cin >> s[i];

//	string tmp;
//	for (i=0;i<n-1;++i)
//	{
//		for (j=0;j<n-1;++j)
//		{
//			if (s[j] > s[j+1])
//			{
//				tmp = s[j];
//				s[j] = s[j+1];
//				s[j+1] = tmp;
//			}
//		}
//	}

//	for (i=0;i<n;i++) cout << s[i] << endl;
//	return (0);
//}