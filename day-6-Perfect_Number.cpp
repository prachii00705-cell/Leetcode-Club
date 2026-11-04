/*
 * DATE: 04/11/2026
 *
 * PROBLEM LINK:https://leetcode.com/problems/perfect-number/?envType=problem-list-v2&envId=math 
 * PROBLEM STATEMENT: 
    A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.
    Given an integer n, return true if n is a perfect number, otherwise return false.
    Example 1:
    Input: num = 28
    Output: true
    Explanation: 28 = 1 + 2 + 4 + 7 + 14
    Example 2:
    Input: num = 7
    Output: false
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used is to find the sum of all the divisors of the number and then check if the sum is equal to the number or not if it is then return true else false.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum+=i;
            }
        } 
        return sum==num;
    }
};

int main() {
    Solution s;
    int num;
    cin >> num;
    cout << s.checkPerfectNumber(num) << endl;
    return 0;
}