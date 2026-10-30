// problem 2235: Add two integers

#include <iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {

        return num1+num2;
        
    }
};

int main() {
    Solution solve;
    int num1, num2;
    cin >> num1 >> num2;
    cout << solve.sum(num1, num2) << endl;
    return 0;
}