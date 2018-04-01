#include <iostream>
#include <string>
using namespace std;
/*
URL: https://leetcode.com/problems/palindrome-number/description/
TYPE: EASY, Algorithm
*/
class Solution {
public:
    bool isPalindrome(int x) {
        int newX = x, compX=0;
        while(newX){
            compX = compX*10 + newX%10;
            newX /= 10;
            // printf("%d %d\n", ne);
        }
        if(compX == x) return true;
        else return false;
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string line;
    while (getline(cin, line)) {
        int x = stringToInteger(line);
        
        bool ret = Solution().isPalindrome(x);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}