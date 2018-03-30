#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	int cnt = 0 ; 
	

	// while(1){
	// 	printf("%d", cin>>s);
	// }

	while(cin >> s){
		cnt++;
	}

	cout << cnt << '\n';
	return 0;
}

	// char input[1000004];
	// //string s1;
	// // char *p = s1;
	// char *p = input;
	// int cnt=0;
	// gets(input);

	// if(*p)
	// 	cnt = 1;
	
	// while(*p){
	// 	if(*p++ == ' '){
	// 		cnt++;
	// 	}
	// }
	// cout << cnt << '\n';