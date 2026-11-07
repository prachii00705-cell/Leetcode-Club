/*
 * DATE: 07/11/2026
 *
 * PROBLEM LINK:https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/description/ 
 * PROBLEM STATEMENT: 
    * Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.
    
    Example 1:
    
    Input: nums = [11,7,2,15]
    Output: 2
    Explanation: The element 7 has the element 2 strictly smaller than it and the element 11 strictly greater than it. 
    Element 11 has element 7 strictly smaller than it and element 15 strictly greater than it. In total there are 2 elements having both a strictly smaller and a strictly greater element.
    Example 2:
    
    Input: nums = [-3,3,3,90]
    Output: 2
    Explanation: The element 3 has the element -3 strictly smaller than it and the element 90 strictly greater than it. Since there are two occurrences of the element 3, we count both of them. In total there are 2 elements having both a strictly smaller and a strictly greater element.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i first find the minimum and maximum element in the array and then i check for each element if it is greater than the minimum and less than the maximum then i increment the count and at the end return the count.
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
    int countElements(vector<int>& nums) {
        int min=nums[0], max=nums[0], count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min) min=nums[i];
            if(nums[i]>max) max=nums[i];
        }
        for(int num : nums){    
            if(num>min && num<max){
                count++;
            }
        }

        return count;
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
    cout << "the number of elements with strictly smaller and greater elements is: " << sol.countElements(nums) << endl;
    return 0;
}