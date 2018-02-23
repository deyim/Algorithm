#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

int main(){
	int T;
	long long int N, Targ;
	cin >> T;

	int minus [] = {2,3,5,7,30,42,70,105};
	int plus [] = {6,10,14,15,21,35,210};

	while(T--){
		cin >> N;
		Targ = N;

		for(int i = 0 ; i < 8 ; i++){
			Targ -= N/minus[i];
		}
		for(int i = 0 ; i < 7 ; i++){
			Targ += N/plus[i];
		}
		cout << Targ << endl;
	}

	return 0;
}