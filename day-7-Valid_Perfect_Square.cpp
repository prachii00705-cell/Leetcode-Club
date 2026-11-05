/*
 * DATE: 05/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/valid-perfect-square/submissions/2190212422/?envType=problem-list-v2&envId=math
 * PROBLEM STATEMENT: 
 * Given a positive integer num, return true if num is a perfect square or false otherwise.
   A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.
   You must not use any built-in library function, such as sqrt.
   Example 1:
   Input: num = 16
   Output: true
   Explanation: We return true because 4 * 4 = 16 and 4 is an integer.
   Example 2: 
   Input: num =  14
   Output: false
   Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used is to find the square of all the numbers starting from 1 and check if it is equal to the given number or not if it is then return true else false.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i=1;
        while (i*i<num){
            i++;
        }
        return i*i==num;
    }
};

int main() {
    Solution s;
    int num;
    cin >> num;
    cout << s.isPerfectSquare(num) << endl;
    return 0;
}