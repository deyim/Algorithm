#include <iostream>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;
/*
URL: https://leetcode.com/problems/minimum-size-subarray-sum/description/
Difficulty: Easy

*/

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n = nums.size(), start = 0, sum = 0, minlen = INT_MAX;
        for (int i = 0; i < n; i++) { 
            sum += nums[i]; 
            while (sum >= s) {
                minlen = min(minlen, i - start + 1); // minlen update
                printf("start %d end %d sum %d \n", start, i, sum);
                sum -= nums[start++]; // 
            }
        }
        return minlen == INT_MAX ? 0 : minlen;
        // int sizeN = nums.size();
        // int minDist = 99999, curDist=0;
        // int curSum = 0, prevSum = 0;

        // if(nums.empty()) return 0;

        // for(int i = 0 ; i < sizeN ; i++){
        //     curSum = nums[i];
        //     if(curSum >= s && minDist > 1){
        //             minDist = 1;
        //     }
        //     for(int j = i+1 ; j < sizeN ; j ++){
        //         prevSum = curSum;
        //         curSum = prevSum+nums[j];
        //         if(curSum >= s && minDist > j-i+1){
        //             minDist = j-i+1;
        //         }
        //     }
        // }

        // if(minDist==99999) return 0;
        // else return minDist;
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

int main() {
    string line;
    while (getline(cin, line)) {
        int s = stringToInteger(line);
        getline(cin, line);
        vector<int> nums = stringToIntegerVector(line);
        
        int ret = Solution().minSubArrayLen(s, nums);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}