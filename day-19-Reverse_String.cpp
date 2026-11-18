/*
 * DATE: 18/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/reverse-string/
 * PROBLEM STATEMENT: 
 * Write a function that reverses a string. The input string is given as an array of characters s.
   You must do this by modifying the input array in-place with O(1) extra memory.
   Example 1:
   Input: s = ["h","e","l","l","o"]
   Output: ["o","l","l","e","h"]
   Example 2:

   Input: s = ["H","a","n","n","a","h"]
   Output: ["h","a","n","n","a","H"]
   
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i took two pointers starting from first and last elements of the string and swap the elements present at that position and then decrease the right by 1 and increase the left by one and then apply the same pointer till both the pointer came to same point and the loop terminates.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }

    }
};
int main() {
    Solution sol;
    string input;
    cout << "enter the string to reverse" << endl;
    cin >> input;
    vector<char> s(input.begin(), input.end());
    sol.reverseString(s);
    cout << "reverse string is "<< endl;
    for (char c : s){
        cout << c;
    }
    cout << endl;

    return 0;
}