/*
 * DATE: 02/11/2026
 *
 * PROBLEM LINK:https://leetcode.com/problems/missing-number/description/?envType=problem-list-v2&envId=math
 * PROBLEM STATEMENT: 
 * Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

   Example 1:

   Input: nums = [3,0,1]
   Output: 2
   Explanation:

   n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

   Example 2:

   Input: nums = [0,1]

   Output: 2


 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * formula for the sum of integers in a series is used n*(n+1)/2 which gives the expected sum of series and then will find the actualsum at the end minus the two will get the missing number.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expextedSum = n*(n+1)/2;
        int actualSum=0;
        for(int num:nums){
            actualSum+=num;
        }
        return expextedSum - actualSum;      

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
    cout << "missing number " << sol.missingNumber(nums) << endl;

    return 0;
}