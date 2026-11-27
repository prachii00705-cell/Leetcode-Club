/*
 * DATE: 27/11/2026
 *
 * PROBLEM LINK: 
 * PROBLEM STATEMENT: 
 *
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *
 * ----------------------------------------
 * Write insights here
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