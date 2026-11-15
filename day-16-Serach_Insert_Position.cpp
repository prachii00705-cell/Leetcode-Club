/*
 * DATE: 15/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/search-insert-position/
 * PROBLEM STATEMENT: 
 * Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
   You must write an algorithm with O(log n) runtime complexity.
   Example 1:
    Input: nums = [1,3,5,6], target = 5
     Output: 2
     Example 2:
     Input: nums = [1,3,5,6], target = 2
     Output: 1
     Example 3:
     Input: nums = [1,3,5,6], target = 7
     Output: 4

 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is i used the concept of binary search to find the target value in the sorted array. If the target value is found, we return its index. If not, we return the index where it would be inserted in order.
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
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return left;
    }
};

int main() {
    Solution sol;
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    cout << "Enter the target value: ";
    int target;
    cin >> target;
    int result = sol.searchInsert(nums, target);
    cout << "The target value should be inserted at index: " << result << endl;

    return 0;
}