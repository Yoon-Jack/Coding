#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> numbers(9); // 9���� ���� ����

    // 9���� �ڿ����� �Է¹���
    for (int i = 0; i < 9; i++) {
        cin >> numbers[i];
    }

    // �ִ��� ã��
    int maxValue = *max_element(numbers.begin(), numbers.end());

    // �ִ��� ��ġ ã�� (1���� �����ϴ� �ε���)    
    int maxIndex = distance(numbers.begin(), find(numbers.begin(), numbers.end(), maxValue)) + 1;

    // ��� ���
    cout << maxValue << endl;
    cout << maxIndex << endl;

    return 0;
}
