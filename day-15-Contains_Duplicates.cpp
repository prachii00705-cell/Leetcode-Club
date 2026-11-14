/*
 * DATE: 14/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/contains-duplicate/
 * PROBLEM STATEMENT: 
 * Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
   example 1:
   Input: nums = [1,2,3,1]
    Output: true
    example 2:
    Input: nums = [1,2,3,4]
    Output: false
    example 3:
    Input: nums = [1,1,1,3,3,4,3,2,4,2]
    Output: true
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i sorted the array and then checked if any two adjacent elements are equal, if they are equal then it means that there is a duplicate in the array and we return true, otherwise we return false.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       for(int i=1;i<nums.size();i++){
        if (nums[i]==nums[i-1]){
            return true;
        }
       }
       return false;
    }
};

int main() {
    Solution s;
    vector<int> nums;
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";    
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cout << s.containsDuplicate(nums) << endl;
    return 0;
}