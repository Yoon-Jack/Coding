#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, number;
	cin >> N;

	vector<int> numbers(N);

	for (int i = 0; i < N; i++)
	{
		cin >> numbers[i];
	
	}

	int minValue = *min_element(numbers.begin(), numbers.end());
	int maxValue = *max_element(numbers.begin(), numbers.end());

	cout << minValue << " " << maxValue << endl;

	return 0;
}