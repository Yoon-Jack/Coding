#include <bits/stdc++.h>  // C++ 표준 라이브러리 헤더를 모두 포함하는 헤더 (경량화된 환경에서는 사용 지양 권장)
using namespace std;

int n, m, a[15001], cnt;  // n: 배열 크기, m: 목표 합, a: 입력 배열, cnt: 합이 m이 되는 쌍의 개수

// 조합을 구하는 재귀 함수 (함수 선언 필요)
void combi(int idx, vector<int>& v);

int main() {
    ios_base::sync_with_stdio(false); // C++의 입출력 속도를 향상
    cin.tie(NULL);  // cin과 cout의 묶음을 해제하여 실행 속도 증가

    cin >> n >> m;  // 배열 크기 n과 목표 값 m 입력
    for (int i = 0; i < n; i++) cin >> a[i];  // n개의 정수 입력 받기

    // 불필요한 if문: m이 200000을 초과하면 0을 출력한다고 했지만, 실제론 의미 없음
    if (m > 200000)
        cout << 0 << "\n";
    else {
        // 모든 두 수의 조합을 탐색하는 이중 for문 (O(n^2) 시간 복잡도)
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] + a[j] == m) cnt++;  // 두 수의 합이 m이면 cnt 증가
            }
        }
        cout << cnt << "\n";  // 결과 출력
    }

    // 조합을 이용한 풀이 (재귀 함수 호출)
    vector<int> v;
    combi(-1, v);  // 재귀적으로 조합을 구하여 cnt를 다시 증가시킴
    cout << cnt << '\n';  // 다시 cnt 출력 (중복 계산 발생)

    return 0;
}

// 조합을 이용해 2개의 숫자를 선택하는 함수
void combi(int idx, vector<int>& v) {
    if (v.size() == 2) {  // 두 개의 숫자를 선택했다면
        int b = a[v[0]];
        int c = a[v[1]];
        if (b + c == m) cnt++;  // 두 숫자의 합이 m이면 cnt 증가
        return;
    }

    // 현재 선택한 마지막 인덱스(idx) 이후의 숫자들을 선택하는 과정
    for (int i = idx + 1; i < n; i++) {
        v.push_back(i);   // 현재 인덱스를 추가
        combi(i, v);      // 재귀 호출하여 다음 숫자 선택
        v.pop_back();     // 백트래킹: 현재 선택을 취소하고 다음 경우를 탐색
    }
}
