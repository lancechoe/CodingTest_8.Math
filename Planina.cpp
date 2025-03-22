/*
문제
Mirko and Slavko are filming a movie adaptation of the popular SF novel "Chicks in space 13". The script requires them to present a lot of different worlds so they decided to film the entire movie in front of a green screen and add CGI backgrounds later. Mirko heard that the best way to generate artificial terrain is to use midpoint displacement algorithm.

To start the algorithm, Mirko selects 4 points forming a perfect square. He then performs the following steps:

On each side of the square, he adds a new point in the exact middle of the side. The height of this new point is the average height of the two points on that side.
In the exact center of the square he adds a new point whose height is the average height of all 4 square vertices, plus a small random value.
After those two steps are performed, he now has 4 new squares. He performs the same steps on the newly created squares again and again until he is pleased with the results. The following diagram illustrates 2 iterations of the algorithm.

		
Start - 4 points	1 iteration - 9 points	2 iterations - 25 points
Mirko noticed that some of the points belong to more than one square. In order to decrease memory consumption, he stores calculates and stores such points only once. He now wonders how many points in total will he need to store in memory after N iterations.

입력
The first and only line of input contains one integer N (1 ≤ N ≤ 15), number of iterations

출력
The first and only line of output should contain one number, the number of points stored after N iterations.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int add = 2;
    int ans = 0;

    cin >> n;

    for(int i=0;i<n;i++){
        add = add+(add-1);
        ans = (add)*(add);
    }

    cout << ans;

    /*
    1번 -> 3의제곱개
    2번 -> 5의제곱개
    3번 -> 9의제곱개
    4번 -> 17의제곱개
    5번 -> 33의제곱개
    */
}