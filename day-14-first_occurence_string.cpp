/*
 * DATE: 13/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
 * PROBLEM STATEMENT: 
    Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

    Example 1:
    Input: haystack = "sadbutsad", needle = "sad"
    Output: 0
    Explanation: "sad" occurs at index 0 and 6.
    The first occurrence is at index 0, so we return 0.
    
    Example 2:
    Input: haystack = "leetcode", needle = "leeto"
    Output: -1
    Explanation: "leeto" did not occur in "leetcode", so we return -1.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i used the find function of the string class to find the first occurrence of the needle in the haystack, if the find function returns string::npos then it means that the needle is not present in the haystack and we return -1, otherwise we return the index of the first occurrence of the needle in the haystack.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos=haystack.find(needle);
        return (pos==string::npos)?-1:pos;
    }
};

int main() {
    Solution sol;
    string haystack, needle;
    cout << "Enter the haystack string: ";
    cin >> haystack;
    cout << "Enter the needle string: ";
    cin >> needle;

    int result = sol.strStr(haystack, needle);
    cout << "Index of first occurrence: " << result << endl;

    return 0;
}