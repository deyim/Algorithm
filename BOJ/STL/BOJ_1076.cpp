#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <math.h>
using namespace std;

int main(){
	pair<int,int> value;
	map<string,int> resist= {{"black",0}, {"brown",1}, {"red",2}, 
	{"orange",3} , {"yellow",4}, {"green",5}, {"blue",6}, 
	{"violet",7}, {"grey",8}, {"white",9}};

	string a,b,c;
	long long int num1, num2, num3, ans;
	cin >> a >> b >> c;
	num1 = resist[a]; num2 = resist[b]; num3 = resist[c];

	ans = num1*10 + num2;
	ans *= pow(10,num3);

	printf("%lld\n", ans);



	return 0;
}