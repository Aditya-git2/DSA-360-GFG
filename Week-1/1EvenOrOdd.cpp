// c++ program to check if a number is even or odd using different approaches
#include<iostream>
using namespace std;
// Naive approach -> using modulus operator   [T.C -> O(1) & S.C -> O(1)]
bool isEven1(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
bool isEven2(int n) {
    return n % 2 == 0;  // returns true if n is even, false if n is odd
}
// Optimized approach -> using Bitwise AND      [T.C -> O(1) & S.C -> O(1)]
bool isEven3(int n) {
    if ((n & 1)== 0) {
        return true;
    } else {
        return false;
    }
}
bool isEven4(int n) {
    return (n & 1) == 0;
}
// Optimized approach -> using Bitwise XOR  [T.C -> O(1) & S.C -> O(1)]
bool isEven5(int n) {
    return (n ^ 1) == n + 1;
}
/* How it(isEven4() function) work?
    - The expression (n ^ 1) flips the least significant bit of n.
    - If n is even, the least significant bit is 0, so flipping it gives 1 (which is odd).
    - If n is odd, the least significant bit is 1, so flipping it gives 0 (which is even).
    - The expression n + 1 increments n by 1.
    - Thus, the equality holds true only when n is even.
*/
int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    isEven5(n) ? cout << n << " is even." : cout << n << " is odd.";
    cout << endl;
}
// Note: keep in mind about operator precedence in C++
// The precedence of the bitwise AND operator (&) is higher than that of the equality operator