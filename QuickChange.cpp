/*
문제
J.P. Flathead’s Grocery Store hires cheap labor to man the checkout stations. The people he hires (usually high school kids) often make mistakes making change for the customers. Flathead, who’s a bit of a tightwad, figures he loses more money from these mistakes than he makes; that is, the employees tend to give more change to the customers than they should get. 

Flathead wants you to write a program that calculates the number of quarters ($0.25), dimes ($0.10), nickels ($0.05) and pennies ($0.01) that the customer should get back. Flathead always wants to give the customer’s change in coins if the amount due back is $5.00 or under. He also wants to give the customers back the smallest total number of coins. For example, if the change due back is $1.24, the customer should receive 4 quarters, 2 dimes, 0 nickels, and 4 pennies. 

입력
The first line of input contains an integer N which is the number of datasets that follow. Each dataset consists of a single line containing a single integer which is the change due in cents, C, (1 ≤ C ≤ 500).

출력
For each dataset, print out the dataset number, a space, and the string: 

Q QUARTER(S), D DIME(S), n NICKEL(S), P PENNY(S) 
Where Q is he number of quarters, D is the number of dimes, n is the number of nickels and P is the number of pennies. 
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    int p;
    int numQ = 0;
    int numD = 0;
    int numN = 0;
    int numP = 0;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> p;

        numQ =  p/25;
        p = p%25;
        numD = p/10;
        p = p%10;
        numN = p/5;
        p = p%5;
        numP = p;

        cout << numQ << " " << numD << " " << numN << " " << numP << endl;
    }
    
}