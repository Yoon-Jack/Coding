#include<bits/stdc++.h>  
using namespace std;

string s, ret;  // �Է� ���ڿ��� ��� ���ڿ�
int cnt[200], flag;  // ���ĺ� ������ ������ �迭�� Ȧ�� ������ ���ڸ� Ȯ���� ����
char mid;  // ��� �� ���ڸ� ������ ����

int main() {
    ios_base::sync_with_stdio(false);  // ����� ���� ����� ���� �ڵ�
    cin.tie(NULL);  // `cin`�� `cout`�� �и��Ͽ� ����� �ӵ� ����

    cin >> s;  // ���ڿ� �Է� �ޱ�

    // 1. �� ������ ������ ī��Ʈ
    for (char a : s) cnt[a]++;

    // 2. ���ĺ� 'Z'���� 'A'���� �������� ó�� (������ ���� �� ū ���ĺ��� ���� ������)
    for (int i = 'Z'; i >= 'A'; i--) {
        if (cnt[i]) {
            if (cnt[i] & 1) {  // �ش� ������ ������ Ȧ���̸�
                mid = char(i);  // ��� �� ���ڷ� ����
                flag++;  // Ȧ�� ���� ������ ���� ����
                cnt[i]--;  // �� ���� �����ϰ� ¦���� ����
            }
            if (flag == 2) break;  // Ȧ�� ���� ���ڰ� 2�� �̻��̸� �Ӹ���� �Ұ���

            // 3. ¦�� ������ŭ ��� ���ڿ��� �߰�
            for (int j = 0; j < cnt[i]; j += 2) {
                ret = char(i) + ret;  // ���ʿ� �߰�
                ret += char(i);  // ���ʿ� �߰�
            }
        }
    }

    // 4. �Ӹ������ ���� �� �ִ� ��� ��� ���� ����
    if (mid) ret.insert(ret.begin() + ret.size() / 2, mid);

    // 5. �Ӹ������ ���� �� ���� ��� ���� ó��
    if (flag == 2) cout << "I'm Sorry Hansoo\n";
    else cout << ret << "\n";  // �Ӹ���� ���
}
