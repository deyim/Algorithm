/*
URL: https://leetcode.com/problems/expressive-words/
Type: EASY
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool check(string S, string word, vector<bool>& extended) {
		int lenS = S.length(), lenW = word.length();
        vector<vector<bool>> dp(lenW+1, vector<bool>(lenS+1, false));
        
        dp[0][0] = true;

        for(int i = 0; i < lenW; i++) {
            for(int j = 0; j < lenS; j++) {
                if(word[i] == S[j] && dp[i][j])
                    dp[i+1][j+1] = true;
                else if(extended[j]){
                    dp[i+1][j+1] = dp[i][j] | dp[i+1][j] | dp[i+1][j-1];
                    //extended 된 애있으면 그 전까지 쭉,, 
                }
            }
        }
        return dp[lenW][lenS];


vector<vector<bool>> dp(word.length()+1, vector<bool>(S.length()+1, false));
        dp[0][0] = true;
        for(int i = 0; i < word.length(); i++) {
            for(int j = 0; j < S.length(); j++) {
                if (word[i] == S[j] && dp[i][j])
                    dp[i+1][j+1] = true ;
                if (extended[j]) {
                    dp[i+1][j+1] = dp[i+1][j+1] | dp[i+1][j] | dp[i+1][j-1];
                }
            }
        }
        return dp[word.length()][S.length()];



        // int lenS = S.length(), lenW = word.length();
		// vector<vector<bool>> dp(lenW+1, vector<bool>(lenS+1, false));
        
		// if(S[0] == word[0])
	 //        dp[0][0] = true;
	 //    else
	 //    	return false; 

  //       for(int i = 0; i < lenW; i++) {
  //           for(int j = 0; j <= lenS; j++) {
  //               if(word[i] == S[j] && dp[i][j])
  //               	dp[i+1][j+1] = true;
  //               else if(extended[j]){
  //               	dp[i+1][j+1] = dp[i][j] | dp[i+1][j];
  //               }
  //           }
  //       }
  //       return dp[lenW][lenS];
    }
    int expressiveWords(string S, vector<string>& words) {
        
        vector<bool> extended(S.length()+1, false);

        for(int j = 2; j < S.length(); j++)
            if (S[j] == S[j-1] && S[j-1] == S[j-2])
                extended[j] = true;
        
        int ans = 0;
        for(auto w : words) {
            if (check(S, w, extended) == true)
                ans += 1;
        }
        return ans;
    }
	// bool isExpressive(string S, string chk){
	// 	int i=1,j=1,len=0;
	// 	bool flag=true;
	// 	int n = S.length(), nChk = chk.length();
	// 	char prev; 

	// 	if(S[0] != chk[0]) flag = false;
	// 	prev = S[0];

	// 	while(i<n && j<nChk){
	// 		if(S[i] == chk[j]){
	// 			if(prev == S[i]){
	// 				len++;
	// 			}
	// 			else{
	// 				len = 0;
	// 				prev = S[i];
	// 			}
	// 			i++; j++;
	// 		}else{ // S[i] != chk[j]

	// 			while(S[i] != chk[j]){
	// 				if(prev == S[i]){
	// 					len++; i++;
	// 				}
	// 				else
	// 					flag = false;
	// 			}
	// 			if(len < 2)
	// 				flag = false;
	// 		}
	// 	}

	// 	if(i!=(n-1) || nChk!=(nChk-1)) flag = false;
	// 	return flag;
	// }

 //    int expressiveWords(string S, vector<string>& words) {
    	
 //    	int cnt = 0;
 //    	for(auto word: words){
 //    		if(isExpressive(S, word))
 //    			cnt++;
 //    	}    
 //    	return cnt; 

        // vector<string> foundWords;
        // int n, start, end, len, cnt;
        // char prev;
        // n = S.length();
        // if(n==0) return 0;
        // if(words.empty()) return 0;
        // for(int i = 0 ; i < n ; i++){
        // 	if(prev == S[i]){
        // 		len++;
        // 	}
        // 	else{
        // 		if(len >= 3){
        // 			end = i;
        // 			for(int j = end; j>=3 ; j--){
        // 				string newWord = S;
        // 				// newWord.replace(S.begin()+start, S.end()+j, string(end-j+1,prev));
        // 				newWord.replace(S.begin()+start, S.end()+j, );
        // 				cout << newWord << "\n";
        // 				foundWords.push_back(newWord);
        // 			}
        // 		}
        // 		len = 1;
        // 		start = i;
       	// 		prev = S[i];
        // 	}
        // }
        // for(auto word: words){
        // 	if(find(foundWords.begin(), foundWords.end(), word)!=foundWords.end())
        // 		cnt++;
        // }
        // return cnt;
    // }
};

int main(){
	return 0;
}