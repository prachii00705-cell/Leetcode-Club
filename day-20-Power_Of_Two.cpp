/*
 * DATE: 19/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/power-of-two/description/
 * PROBLEM STATEMENT: 
   Given an integer n, return true if it is a power of two. Otherwise, return false.
   An integer n is a power of two, if there exists an integer x such that n

   Example 1:

Input: n = 1
Output: true
Explanation: 2^0 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 2^4 = 16
Example 3:

Input: n = 3
Output: false

 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i checked if the number is less than or equal to zero then return false and then i checked if the number is divisible by 2 then keep dividing it by 2 and at the end check if the number is equal to 1 or not if it is equal to 1 then return true else return false.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        while(n%2==0){
            n/=2;
        }

        return n==1;
            
    }
};

int main() {
    Solution sol;
    int n;
    cout << "enter the number to check if it is power of two or not" << endl;
    cin >> n;
    cout << sol.isPowerOfTwo(n) << endl;
    
    return 0;
}