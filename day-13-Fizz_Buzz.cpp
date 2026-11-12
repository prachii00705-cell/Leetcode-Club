/*
 * DATE: 12/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/fizz-buzz/
 * PROBLEM STATEMENT: 
 * Given an integer n, return a string array answer (1-indexed) where:
    answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
    answer[i] == "Fizz" if i is divisible by 3.
    answer[i] == "Buzz" if i is divisible by 5.
    answer[i] == i (as a string) if none of the above conditions are true.
    
    Example 1:
    Input: n = 3
    Output: ["1","2","Fizz"]
    
    Example 2:
    Input: n = 5
    Output: ["1","2","Fizz","4","Buzz"]
    
    Example 3:
    Input: n = 15
    Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * the logic i used here is that i traversed the numbers from 1 to n and checked if the number is divisible by 3 and 5, if yes then i added "FizzBuzz" to the answer vector, if not then i checked if the number is divisible by 3, if yes then i added "Fizz" to the answer vector, if not then i checked if the number is divisible by 5, if yes then i added "Buzz" to the answer vector, if not then i added the number as a string to the answer vector.
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                answer.push_back("FizzBuzz");
            }
            else if(i%3==0){
                answer.push_back("Fizz");
            }
            else if(i%5==0){
                answer.push_back("Buzz");
            }
            else{
                answer.push_back(to_string(i));
            }
        }
        return answer;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "enter the number: ";
    cin >> n;
    vector<string> result = sol.fizzBuzz(n);
    cout << "FizzBuzz result: ";
    for(const string& str : result) {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}