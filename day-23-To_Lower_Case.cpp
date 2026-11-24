/*
 * DATE: 24/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/to-lower-case/description/
 * PROBLEM STATEMENT: 
 * Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
   Example 1:
   Input: s = "Hello"
    Output: "hello"
    Example 2:
    Input: s = "here"
    Output: "here"
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i traversed the string and checked if the character is in the range of A-Z then i converted it to lowercase by adding 32 to it and at the end returned the modified string.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "enter the string: ";
    cin >> s;
    string result = sol.toLowerCase(s);
    cout << "Lowercase string: " << result << endl;

    return 0;
}