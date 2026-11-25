/*
 * DATE: 25/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/move-zeroes/
 * PROBLEM STATEMENT: 
    Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
    Note that you must do this in-place without making a copy of the array.
    
    Example 1:
    Input: nums = [0,1,0,3,12]
    Output: [1,3,12,0,0]
    
    Example 2:
    Input: nums = [0]
    Output: [0]
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i used two pointers left and right, left pointer points to the first zero and right pointer points to the next non-zero element. If the left pointer points to a zero then swap the elements at left and right pointers and then increment both pointers. If the left pointer points to a non-zero element then increment only the left pointer. Repeat this process until the right pointer reaches the end of the array.
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
    void moveZeroes(vector<int>& nums) {
        int left=0;
        int right=1;
        while(right<nums.size() && left<right){
            if(nums[left]==0) swap(nums[left],nums[right]);
            if(nums[left]!=0) left++;
            right++;
        }
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    sol.moveZeroes(nums);
    cout << "Array after moving zeros to the end: ";
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}