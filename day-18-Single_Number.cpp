/*
 * DATE: 17/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/single-number/
 * PROBLEM STATEMENT: 
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
   You must implement a solution with a linear runtime complexity and use only constant extra space.
    Example 1:
    Input: nums = [2,2,1]
    Output: 1
    Example 2:
    Input: nums = [4,1,2,1,2]
    Output: 4
    Example 3:
    Input: nums = [1]
    Output: 1
 * ----------------------------------------
 *
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i used the XOR operator to find the single number in the array. The XOR operator has the property that a^a=0 and a^0=a. So if we XOR all the numbers in the array, the numbers that appear twice will cancel each other out and we will be left with the single number.
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
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int num:nums){
            result^=num;
        }
        return result;
    }
};

int main() {
    Solution sol;
    int size;
    cout << "enter number of elements in array: ";
    cin >> size;
    vector<int> nums(size);
    cout << "enter the elements: ";
    for(int i=0;i<size;i++){
        cin >> nums[i];
    }
    cout << "single number " << sol.singleNumber(nums) << endl;

    return 0;
}