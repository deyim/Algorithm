#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;

vector<int> getPi(string p){

}

vector<int> kmp(string s, string p){
	
}

int main(){
	string s, p;
	getline(cin, s);
	getline(cin, p);
	auto matched = kmp(s,p);

	printf("%d\n", (int)matched.size());
	for(auto i : matched)
		printf("%d ", i+1);
	return 0;
}