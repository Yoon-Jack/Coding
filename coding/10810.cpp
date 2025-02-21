#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> baskets(N, 0);

	for (int t = 0; t < M; t++)
	{
		int i, j, k;
		cin >> i >> j >> k;

		for (int idx = i - 1; idx < j; idx++)
		{
			baskets[idx] = k;
		}
	}


	for (int b : baskets)
	{
		cout << b << " ";
	}
	cout << endl;

	
	return 0;
}