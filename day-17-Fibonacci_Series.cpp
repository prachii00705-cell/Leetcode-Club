/*
 * DATE: 16/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/fibonacci-number/
 * PROBLEM STATEMENT: 
 * the Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
 * F(0) = 0, F(1) = 1
 * F(n) = F(n - 1) + F(n - 2), for n > 1.
   Given n, calculate F(n).
   Example 1:
    Input: n = 2
    Output: 1
    Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
    Example 2:
    Input: n = 3
    Output: 2
    Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
    Example 3:
    Input: n = 4
    Output: 3
    Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
 * ----------------------------------------
 *
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is i used the concept of dynamic programming to find the nth Fibonacci number. I used two variables to store the previous two Fibonacci numbers and iteratively calculated the next Fibonacci number until I reached the nth Fibonacci number.
 *
 * ----------------------------------------
 *
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
class Solution {
public:
    int fib(int n) {
        int a=1,b=0,c;
        if(n==0) return 0;
        for(int i=1;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};

int main() {
    Solution sol;
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << sol.fib(n) << endl;
    return 0;
}