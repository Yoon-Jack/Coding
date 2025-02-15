#include <bits/stdc++.h> // 표준 라이브러리 포함
using namespace std;

int n, ret; // n: 입력받을 문자열의 개수, ret: 좋은 단어의 개수를 저장
string s; // 입력받을 문자열

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // 입출력 속도를 빠르게 하기 위한 설정

    cin >> n; // 문자열 개수 입력
    for (int i = 0; i < n; i++) { // n개의 문자열에 대해 반복
        cin >> s; // 문자열 입력
        stack<char> stk; // 스택 선언

        for (char a : s) { // 문자열의 각 문자 순회
            // 스택이 비어있지 않고, 스택의 맨 위 문자와 현재 문자가 같다면 pop
            if (!stk.empty() && stk.top() == a) {
                stk.pop();
            }
            else { // 그렇지 않으면 현재 문자를 스택에 push
                stk.push(a);
            }
        }

        // 스택이 비어 있다면, 짝이 맞아 모두 제거되었으므로 좋은 단어로 간주
        if (stk.empty()) ret++;
    }
    cout << ret << "\n"; // 좋은 단어의 개수 출력
}
