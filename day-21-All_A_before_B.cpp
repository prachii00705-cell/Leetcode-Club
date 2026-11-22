/*
 * DATE: 22/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/?envType=daily-question&envId=2026-11-22
 * PROBLEM STATEMENT:
    Given a string s consisting of only the characters 'a' and 'b', return true if every 'a' appears before every 'b' in the string. Otherwise, return false.
    
    Example 1:
    Input: s = "aaabbb"
    Output: true
    
    Example 2:
    Input: s = "abab"
    Output: false
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i traversed the string and checked if there is any 'b' followed by 'a' if yes then return false else return true.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]=='b' && s[i+1]=='a'){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "enter the string to check if all A's are before B's or not" << endl;
    cin >> s;

    if(sol.checkString(s)){
        cout << "All A's are before B's" << endl;
    }else{
        cout << "All A's are not before B's" << endl;
    }
    return 0;
}