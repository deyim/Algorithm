#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>
using namespace std;
int main() {
    string s1,s2;
    cin >> s1 >> s2;
    bitset<100000> a(s1),b(s2);
    cout << (a & b) << '\n';
    cout << (a | b) << '\n';
    cout << (a ^ b) << '\n';
    cout << (~a) << '\n';
    cout << (~b) << '\n';
    return 0;
}
// #include <bitset>
// #include <iostream>
// #include <cstdio>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main(){
// 	string a1, a2;
// 	cin >> a1 >> a2;
// 	bitset<100000> b1(a1), b2(a2);

// 	cout << (b1 & b2) << '\n';
// 	cout << (b1 | b2) << '\n';
// 	cout << (b1 ^ b2) << '\n';
// 	cout << ~b1 << '\n';
// 	cout << ~b2 << '\n';

// 	return 0;
// }