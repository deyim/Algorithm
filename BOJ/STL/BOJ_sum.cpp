#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	
	cout << [](int x, int y) {
		return x+y;
	}(1,2) << '\n';

	auto sum2 = [](int x, int y){
		return x+y;
	};

	cout << sum2(1,2) << '\n';

	return 0;

}