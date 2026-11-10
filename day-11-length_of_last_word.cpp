/*
 * DATE: 10/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/length-of-last-word/description/
 * PROBLEM STATEMENT: 
 * Given a string s consisting of words and spaces, return the length of the last word in the string. A word is a maximal substring consisting of non-space characters only.
Example 1:
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Example 2:
Input: s = "   fly me   to   the moon  "    
Output: 4
Explanation: The last word is "moon" with length 4.

Example 3:
Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.

 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i traversed the string from the end and kept adding the characters to a new string until i found a space and then returned the length of the new string.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        string last="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
                last+=s[i];
            }
            else if(last.length()>0){
                break;
            }
        }
        return last.length();
    }
};
int main() {
    Solution sol;
    string s;
    cout << "enter the string: ";
    getline(cin, s);
    cout << "Length of last word: " << sol.lengthOfLastWord(s) << endl;


    return 0;
}