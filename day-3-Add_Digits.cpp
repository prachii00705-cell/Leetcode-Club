/*
 * DATE: 01/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/add-digits/description/?envType=problem-list-v2&envId=math
 * PROBLEM STATEMENT: 
 * Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
   Example 1:

   Input: num = 38
   Output: 2
   Explanation: The process is
   38 --> 3 + 8 --> 11
   11 --> 1 + 1 --> 2 
   Since 2 has only one digit, return it.
   Example 2:
   Input: num = 0
   Output: 0
   Constraints:
   0 <= num <= 231 - 1
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used to solve this problem is to use a while loop to repeatedly add the digits of the number until the result has only one digit. I used the modulo operator to extract each digit and then added them together. This process continues until the number is reduced to a single digit.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int sum=0;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            num=sum;
        }
        return num;
    }
};

int main() {
    Solution sol;
    int num;
    cin >> num;
    cout << sol.addDigits(num) << endl;
    return 0;
}