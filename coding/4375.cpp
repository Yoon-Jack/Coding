#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

typedef long long ll; // long long�� ll�� ��Ī ����

int n; // �Է¹��� ����

int main() {
    while (cin >> n) {

        if ((n & 2) == 0 || (n & 5) == 0) // 2 5 �� �ȶ������� �̸� ����
            break;

        int cnt = 1, ret = 1; // cnt�� ���� ������� ����, ret�� �ڸ��� ī��Ʈ
        // 1, 11, 111, 1111 ... �̷� ���ڸ� ����鼭 n���� ������ ���������� Ȯ��
        while (true) {
            if (cnt % n == 0) { // cnt�� n���� ������ �������� ����
                printf("%d\n", ret); // ��� ��� (�� �ڸ����� ���)
                break;
            }
            else {
                cnt = (cnt * 10) + 1; // 1�� �����ʿ� �߰��Ͽ� ���ο� ���� ����
                cnt %= n; // �������� �����Ͽ� �����÷ο� ����
                ret++; // �ڸ� �� ����
            }
        }
    }
    return 0;
}
