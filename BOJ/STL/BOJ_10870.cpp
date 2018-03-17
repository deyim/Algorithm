#include <functional>
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	function<int(int)> fibo = [&](int n){
		if (n <= 1) return n;
		else return fibo(n-1) + fibo(n-2);
	};
	//recursion cannot use auto >> clarify function type

	cout << fibo(n) << '\n';
	return 0;
}