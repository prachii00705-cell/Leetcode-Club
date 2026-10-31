/*
 * DATE: 31/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/palindrome-number/description/?envType=problem-list-v2&   envId=math
 * PROBLEM STATEMENT: 
    Given an integer x, return true if x is a palindrome, and false otherwise.
    Example 1:
    Input: x = 121
    Output: true
    Explanation: 121 reads as 121 from left to right and from right to left.
    Example 2:
    Input: x = -121
    Output: false
    Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
    Example 3:
    Input: x = 10
    Output: false
    Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
    Constraints:
    -231 <= x <= 231 - 1
 *
 * ----------------------------------------
 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * key insights gained from this problem include understanding the concept of palindromes, implementing a    method to reverse an integer, and comparing the original integer with its reversed version to determine if it is a palindrome.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        int current =x;

        long long reverse = 0;

        while (x>0){
            reverse=reverse*10+(x%10);
            x/=10;
        }

        return current==reverse;
        
    }
};

int main() {
    Solution sol;
    int x;
    cin >> x; 
    cout << sol.isPalindrome(x) << endl;

    return 0;
}