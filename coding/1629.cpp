#include <bits/stdc++.h> // ǥ�� ���̺귯�� ����
using namespace std;

typedef long long ll; // long long�� ll�� �����Ͽ� ū ������ �ٷ� �� �ֵ��� ����

ll a, b, c; // a: ��(base), b: ����(exponent), c: ���� ��(mod)

// ���� ������ �̿��� �ŵ����� �Լ�
ll go(ll a, ll b) {
     if (b == 1) return a % c; // ���� ���: b�� 1�̸� a�� c�� ���� �������� ��ȯ

    ll ret = go(a, b / 2); // ������ �������� �ٿ� ��� ȣ��
    ret = (ret * ret) % c;  // ���� ���� �����Ͽ� c�� ���� �������� ����

    if (b % 2) 
        ret = (ret * a) % c; // ������ Ȧ���� ���, a�� �� �� �� ���ϰ� c�� ���� ������ ����

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); // ����� �ӵ��� ����ȭ

    cin >> a >> b >> c; // a, b, c �Է� �ޱ�
    cout << go(a, b) << "\n"; // a^b % c�� ��� ���

    return 0;
}
