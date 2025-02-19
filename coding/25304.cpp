#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);  
	cin.tie(NULL);  cout.tie(NULL);

	int X, N, a, b;
	int value = 0;

	cin >> X;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		value += (a * b);			
	}

	if (value == X)
		cout << "Yes";

	else
		cout << "No";

	return 0;
}