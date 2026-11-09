/*
 * DATE: 09/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=array
 * PROBLEM STATEMENT: 
    * Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
    * Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.
    * Return k after placing the final result in the first k slots of nums.
    * Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
    
    Example 1:
    
    Input: nums = [1,1,2]
    Output: 2, nums = [1,2,_]
    Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively. It does not matter what you leave beyond the returned k (hence they are underscores).
    Example 2:
    
    Input: nums = [0,0,1,1,1,2,2,3,3,4]
    Output: 5, nums = [0,1,2,3,4]
    Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3 and 4 respectively. It does not matter what you leave beyond the returned k (hence they are underscores).
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i used two pointers one pointer to keep track of the unique elements and the other pointer to traverse the array and whenever i find a unique element i place it in the position of the first pointer and increment both pointers.
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
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
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
    int k = sol.removeDuplicates(nums);
    cout << "Number of unique elements: " << k << endl;
    cout << "Unique elements: ";
    for(int i=0;i<k;i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}