/*
 * DATE: 23/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/self-dividing-numbers/description/
 * PROBLEM STATEMENT: 
    A self-dividing number is a number that is divisible by every digit it contains.
     For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
     A self-dividing number is not allowed to contain the digit zero.
     Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].
     
     Example 1:
     Input: left = 1, right = 22
     Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]
     
     Example 2:
     Input: left = 47, right = 85
     Output: [48,55,66,77]
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i traversed the numbers from left to right and for each number i converted it to string and then traversed the string and checked if the number is divisible by each digit or not if it is then i incremented the count and at the end if the count is equal to the length of the string then i added that number to the result vector.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
        for(int i=left;i<=right;i++){
            string s=to_string(i);
            int count=0;
            for(char ch:s){
                int digit = ch-'0';
                if(digit!=0 && i%digit==0){
                    count++;
                }
            }
            if(count==s.length()){
                nums.push_back(i);
            }
        }
        return nums;
    }
};

int main() {
    Solution sol;
    int left, right;
    cout << "enter the left and right range: ";
    cin >> left >> right;
    vector<int> result = sol.selfDividingNumbers(left, right);
    cout << "Self Dividing Numbers: ";
    for(int n : result) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}