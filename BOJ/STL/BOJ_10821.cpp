#include <iostream>
#include <string>
using namespace std;

int main(){


	string s;
	int cnt = 1;
	while(getline(cin,s,',')){
		cnt ++;
	}

	// int cnt = 0;
	// string s;
	// cin >> s;

	// if(s)
	// 	cnt++;

	// while(char x:s){
	// 	if(x==',')
	// 		cnt++;
	// }

	cout << cnt << '\n';

}