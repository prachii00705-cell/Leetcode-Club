/*
 * DATE: 03/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/happy-number/description/?source=submission-noac
 * PROBLEM STATEMENT:
   Write an algorithm to determine if a number n is happy.
   A happy number is a number defined by the following process:
   Starting with any positive integer, replace the number by the sum of the squares of its digits.
   Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
   Those numbers for which this process ends in 1 are happy.
   Return true if n is a happy number, and false if not.
   Example 1:
   Input: n = 19
   Output: true
   Explanation:
   12 + 92 = 82
   82 + 22 = 68
   62 + 82 = 100
   12 + 02 + 02 = 1
   Example 2:

   Input: n = 2
   Output: false 
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * i used the logic of sum of squares of digits we first put the condition in while for excluding the numbers 1 and 4 because it forms an endless loop after checking it we will calculate the sum of squares of digits and then assign it to n and repeat the process until we reach 1 or a number less than 10 ant the last if n=1 then happy number and if not then false.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4){
            int sum=0;
            while(n>0){
                sum+=pow(n%10, 2);
                n/=10;
            }
            n=sum;
        }
        return n==1;
        
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    cout << sol.isHappy(n) << endl; 

    return 0;
}