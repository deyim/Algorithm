#include <cstdio>
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){
	string s;
	int N;
	char op, ch;

	cin >> s;
	list<char> editor(s.begin(),s.end());
	auto cursor = editor.end();
	cin >> N;

	while(N--){
		scanf("\n%c", &op);
		//cin >> op;
		switch(op){
			case 'L':
				if(cursor != editor.begin()){
					cursor--;
				}
				break;
			case 'D':
				if(cursor != editor.end()){
					cursor++;
				}
				break;
			case 'B':
				if(cursor != editor.begin()){
					auto tmp = cursor;
					editor.erase(--cursor);
					cursor = tmp;
				}
				break;
			case 'P':
				char ch;
				cin >> ch;
				editor.insert(cursor,ch);
		}
	}
	for(char c: editor){
		cout << c;
	}
	cout << '\n';




}