#include <bits/stdc++.h> // 표준 라이브러리 포함
using namespace std;

typedef long long ll; // long long을 ll로 정의하여 큰 정수를 다룰 수 있도록 설정

ll a, b, c; // a: 밑(base), b: 지수(exponent), c: 나눌 값(mod)

// 분할 정복을 이용한 거듭제곱 함수
ll go(ll a, ll b) {
     if (b == 1) return a % c; // 기저 사례: b가 1이면 a를 c로 나눈 나머지를 반환

    ll ret = go(a, b / 2); // 지수를 절반으로 줄여 재귀 호출
    ret = (ret * ret) % c;  // 계산된 값을 제곱하여 c로 나눈 나머지를 저장

    if (b % 2) 
        ret = (ret * a) % c; // 지수가 홀수일 경우, a를 한 번 더 곱하고 c로 나눈 나머지 저장

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); // 입출력 속도를 최적화

    cin >> a >> b >> c; // a, b, c 입력 받기
    cout << go(a, b) << "\n"; // a^b % c의 결과 출력

    return 0;
}
