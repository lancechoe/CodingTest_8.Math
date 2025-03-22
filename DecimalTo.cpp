/*
문제
10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.

10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.

A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35

입력
첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36) N은 10억보다 작거나 같은 자연수이다.

출력
첫째 줄에 10진법 수 N을 B진법으로 출력한다.
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int N;
    int B;
    stack<char> ans;
    cin >> N >> B;

    char result = 0;

    while(N/B != 0){
        if((N%B) > 9){
            result = (N%B) + 'A' - 10;
        }
        else{
            result = '0' + N%B;
        }

        ans.push(result);

        N = N/B;
    }

    if((N%B) > 9){
        result = (N%B) + 'A' - 10;
    }
    else{
        result = '0' + N%B;
    }

    ans.push(result);

    while(!ans.empty()){
        cout << ans.top();
        ans.pop();
    }
    
    return 0;
}