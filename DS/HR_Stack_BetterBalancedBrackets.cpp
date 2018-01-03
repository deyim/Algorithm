/*
 * =====================================================================================
 *
 *       Filename:  BalancedBrackets.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/08/2017 21:57:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool is_balanced(string expression) {
    
  stack<char> s;
  for (char c : expression) {
    if      (c == '{') s.push('}');
    else if (c == '[') s.push(']');
    else if (c == '(') s.push(')');
    else {
      if (s.empty() || c != s.top())
        return false;
      s.pop();
    }
  }
  return s.empty();
}
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

