/*
문제
무한히 큰 배열에 다음과 같이 분수들이 적혀있다.

1/1	1/2	1/3	1/4	1/5	…
2/1	2/2	2/3	2/4	…	…
3/1	3/2	3/3	…	…	…
4/1	4/2	…	…	…	…
5/1	…	…	…	…	…
…	…	…	…	…	…
이와 같이 나열된 분수들을 1/1 → 1/2 → 2/1 → 3/1 → 2/2 → … 과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.

X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 X(1 ≤ X ≤ 10,000,000)가 주어진다.

출력
첫째 줄에 분수를 출력한다.
*/

#include <iostream>
using namespace std;

int main(){
    /*
    합이 2 , 3 , 4 , 5 ...
        1개 , 2개 , 3개 , 4개 , ... n(n+1)/2
        {1} , {2,3} , {4,5,6} , {7,8,9,10} , {11,12,13,14,15}
    */

     long long n;
     int sum = 1;
     int a;
     int b;

     cin >> n;

     while(sum*(sum+1)/2 < n){
        sum++;
     }

    // if n = 14 , sum = 5

     if(n == 1){
        cout << "1/1";
        return 0;
     }

     if(sum%2 == 1){
        b = n - (sum-1)*sum/2;
        a = (sum+1)-b;

        cout << a << "/" << b;
     }
     else{
        a = n - (sum-1)*sum/2;
        b = (sum+1)-a;

        cout << a << "/" << b;
     }

     // there are (sum-1) ways to make fractions

    
}