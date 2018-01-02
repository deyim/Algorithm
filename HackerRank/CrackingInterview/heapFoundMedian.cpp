#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int two;
    cin >> n;
    vector<int> a(n);
    cin >> a[0];
    //make_heap(a.begin(), a.end());
    //printf("%.1f\n",(float)a[0]);
    for(int a_i = 1;a_i < n;a_i++){
       cin >> a[a_i];
       //push_heap(a.begin(), a.end());
       sort(a.begin(), a.end());
      //for(int i = 0 ; i < a_i ; a_i++)
        //printf("%d ", a[i]);
      //printf("\n");
		 if(a_i%2==0)
       	printf("%.1f\n",(float)a[a_i/2]);
     else{
       	two = 0;
       	two += a[a_i/2];
       	two += a[a_i/2+1];
       	printf("%.1f\n",(float)two/2);
       }
    }
    return 0;
}


















































