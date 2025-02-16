#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

typedef long long ll; // long long을 ll로 별칭 선언

int n; // 입력받을 정수

int main() {
    while (cin >> n) {

        if ((n & 2) == 0 || (n & 5) == 0) // 2 5 로 안떨어지게 미리 차단
            break;

        int cnt = 1, ret = 1; // cnt는 현재 만들어진 숫자, ret은 자릿수 카운트
        // 1, 11, 111, 1111 ... 이런 숫자를 만들면서 n으로 나누어 떨어지는지 확인
        while (true) {
            if (cnt % n == 0) { // cnt가 n으로 나누어 떨어지면 종료
                printf("%d\n", ret); // 결과 출력 (몇 자리인지 출력)
                break;
            }
            else {
                cnt = (cnt * 10) + 1; // 1을 오른쪽에 추가하여 새로운 수를 만듦
                cnt %= n; // 나머지만 유지하여 오버플로우 방지
                ret++; // 자리 수 증가
            }
        }
    }
    return 0;
}
