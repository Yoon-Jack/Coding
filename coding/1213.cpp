#include<bits/stdc++.h>  
using namespace std;

string s, ret;  // 입력 문자열과 결과 문자열
int cnt[200], flag;  // 알파벳 개수를 저장할 배열과 홀수 개수의 문자를 확인할 변수
char mid;  // 가운데 올 문자를 저장할 변수

int main() {
    ios_base::sync_with_stdio(false);  // 입출력 성능 향상을 위한 코드
    cin.tie(NULL);  // `cin`과 `cout`을 분리하여 입출력 속도 개선

    cin >> s;  // 문자열 입력 받기

    // 1. 각 문자의 개수를 카운트
    for (char a : s) cnt[a]++;

    // 2. 알파벳 'Z'부터 'A'까지 역순으로 처리 (사전순 정렬 시 큰 알파벳이 먼저 오도록)
    for (int i = 'Z'; i >= 'A'; i--) {
        if (cnt[i]) {
            if (cnt[i] & 1) {  // 해당 문자의 개수가 홀수이면
                mid = char(i);  // 가운데 올 문자로 저장
                flag++;  // 홀수 개수 문자의 개수 증가
                cnt[i]--;  // 한 개를 제외하고 짝수로 만듦
            }
            if (flag == 2) break;  // 홀수 개수 문자가 2개 이상이면 팰린드롬 불가능

            // 3. 짝수 개수만큼 결과 문자열에 추가
            for (int j = 0; j < cnt[i]; j += 2) {
                ret = char(i) + ret;  // 앞쪽에 추가
                ret += char(i);  // 뒤쪽에 추가
            }
        }
    }

    // 4. 팰린드롬을 만들 수 있는 경우 가운데 문자 삽입
    if (mid) ret.insert(ret.begin() + ret.size() / 2, mid);

    // 5. 팰린드롬을 만들 수 없는 경우 예외 처리
    if (flag == 2) cout << "I'm Sorry Hansoo\n";
    else cout << ret << "\n";  // 팰린드롬 출력
}
