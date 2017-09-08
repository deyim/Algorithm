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
    stack<char> stck;
    char tmp;
    
    /*
    int i;
    int length = expression.length();
    if(length % 2 != 0) return false;
    for( i = 0 ; i < length/2 ; i++) stck.push(expression[i]);
    
    for(;i < length;i++){
        tmp = stck.top;
        if(tmp != )
    }
    */
    int length = expression.length();
    if(length % 2 != 0) return false;
    
    for(auto cha : expression){
        if(cha == '(') stck.push('a');
        else if(cha == '{') stck.push('b');
        else if(cha == '[') stck.push('c');
        
        else if(cha == ')'){
            if(stck.empty()) return false;
            tmp = stck.top();
            if(tmp != 'a') return false;
            stck.pop();
        }
        else if(cha == '}'){
            if(stck.empty()) return false;
            tmp = stck.top();
            if(tmp != 'b') return false;
            stck.pop();
        }
        else if(cha == ']'){
            if(stck.empty()) return false;
            tmp = stck.top();
            if(tmp != 'c') return false;
            stck.pop();
        }
    }
    if(stck.empty()) return true;
    return false;
    
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

