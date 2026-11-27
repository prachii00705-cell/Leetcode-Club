/*
 * DATE: 27/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/third-maximum-number/
 * PROBLEM STATEMENT: 
   You are given an integer array nums.
   Return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
   Example 1:
   Inpur: nums=[3,2,1]
   Output: 1
   Explanation:
   The first distinct maximum is 3.
   The second distinct maximum is 2.
   The third distinct  maximum is 1.
   Example 2:
   Input: nums=[1,2]
   Output: 2
   Explanation:
   The first distinct maximum is 2.
   The second distinct maximum is 1.
   The third maximum distinct maximum does not exist, so the maximum (2) is returned instead.
   Example 3:
   Input: nums=[2,2,3,1]
   Output: 1
   Explanation:
   The first distinct maximum is 3.
   The second maximum is 2(both2's are counted together since they have the same value).
   The third distinct maximum is 1.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * The logic i used here is that first i sorted the array in descending order and remove the duplicated values by pushing values in temp skipping the duplicacy then if the size is more or equal to 3 then number at 3rd index would be returned otherwise number at index 0 which is highest will be returned.
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
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1]) temp.push_back(nums[i]);
            if(temp.size()==3) return temp[2];
        }

        return temp[0];
    }
};

int main() {
    Solution sol;
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    cout << "third max number is: " << sol.thirdMax(nums) << endl;

    return 0;
}