#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> numbers(9); // 9개의 정수 저장

    // 9개의 자연수를 입력받음
    for (int i = 0; i < 9; i++) {
        cin >> numbers[i];
    }

    // 최댓값을 찾음
    int maxValue = *max_element(numbers.begin(), numbers.end());

    // 최댓값의 위치 찾기 (1부터 시작하는 인덱스)    
    int maxIndex = distance(numbers.begin(), find(numbers.begin(), numbers.end(), maxValue)) + 1;

    // 결과 출력
    cout << maxValue << endl;
    cout << maxIndex << endl;

    return 0;
}
