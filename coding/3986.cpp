#include <bits/stdc++.h> // ǥ�� ���̺귯�� ����
using namespace std;

int n, ret; // n: �Է¹��� ���ڿ��� ����, ret: ���� �ܾ��� ������ ����
string s; // �Է¹��� ���ڿ�

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // ����� �ӵ��� ������ �ϱ� ���� ����

    cin >> n; // ���ڿ� ���� �Է�
    for (int i = 0; i < n; i++) { // n���� ���ڿ��� ���� �ݺ�
        cin >> s; // ���ڿ� �Է�
        stack<char> stk; // ���� ����

        for (char a : s) { // ���ڿ��� �� ���� ��ȸ
            // ������ ������� �ʰ�, ������ �� �� ���ڿ� ���� ���ڰ� ���ٸ� pop
            if (!stk.empty() && stk.top() == a) {
                stk.pop();
            }
            else { // �׷��� ������ ���� ���ڸ� ���ÿ� push
                stk.push(a);
            }
        }

        // ������ ��� �ִٸ�, ¦�� �¾� ��� ���ŵǾ����Ƿ� ���� �ܾ�� ����
        if (stk.empty()) ret++;
    }
    cout << ret << "\n"; // ���� �ܾ��� ���� ���
}
