/*
문제
There is a snail on the ground. It wants to climb to the top of a wooden pole with the height of V meters, measuring from the ground level. In one day it can climb A meters upwards, however during each night it sleeps, sliding B meters back down. Determine the number of days it needs to climb to the top. 

입력
The first and only line of input contains three integers separated by a single space: A, B, and V (1 ≤ B < A ≤ V ≤ 1 000 000 000), with meanings described above. 

출력
The first and only line of output must contain the number of days that the snail needs to reach the top. 
*/

#include <iostream>
using namespace std;

int main(){
    long long a, b, v;
    long long day = 1;
    long long h = 0;

    cin >> a >> b >> v;

    if((v-b) % (a-b) == 0){
        day = (v-b) / (a-b);
    }
    else{
        day = ((v-b) / (a-b)) + 1;
    }

    cout << day;
    
    // ax - bx >= v - b
}