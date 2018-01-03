//#include <iostream>
//using namespace std;
//int d[1000] = {};
//
//int makeOne(int N){
//	
//	int temp;
//	
//	if(N == 1) return 0;
//	if(d[N] > 0 ) return d[N];
//	
//	d[N] = makeOne(N-1)+1;
//	
//	if(N%3 == 0){
//		temp = makeOne(N/3)+1;
//		if(temp<d[N]) d[N] = temp;
//	}
//	
//	if(N%2 == 0){
//		temp = makeOne(N/2)+1;
//		if(temp<d[N]) d[N] = temp;
//	}
//	
//	return d[N];
//	
//}
//int main(){
//	int N;
//	cin >> N;
//	printf("%d\n", makeOne(N));
//	return 0;
//}

#include <iostream>
using namespace std;

int main(){
	int d[1000001] = {};
	int N;
	cin >> N;
	d[1] = 0;
	for(int i = 2; i <=N ; i++ ){
		d[i] = d[i-1] +1;
		if(i%2 == 0 && d[i] > d[i/2] + 1)
			d[i] = d[i/2] + 1;
		if(i%3 == 0 && d[i] > d[i/3] + 1)
			d[i] = d[i/3] + 1;
		//printf("%d\n",d[i]);
	}
	
	printf("%d\n",d[N]);
}
