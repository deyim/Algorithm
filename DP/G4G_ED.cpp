// type: DP
// URL: https://practice.geeksforgeeks.org/problems/edit-distance/0
#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int min(int a, int b, int c){
	return min(min(a,b),c);
}

int main(){
	int T;
//	char *s1, *s2;
	int len1, len2;
	char s1[100], s2[100];

	cin >> T;

	while(T--){
		scanf("%d %d", &len1, &len2);
	//	s1 = new char[len1]; s2 = new char[len2];		
		scanf("%s %s", s1, s2);
		//getline(cin,s1); getline(cin,s2);
		int d[len2+1][len1+1];

//		int** d = new int*[len2+1];
//		for(int i = 0; i <= len2; ++i){
  //  		d[i] = new int[len1+1];
	//	}


		d[0][0] = 0;

		for(int i = 1 ; i <= len1 ; i++)
			d[0][i] = d[0][i-1]+1;

		for(int i = 1 ; i <= len2 ; i++)
			d[i][0] = d[i-1][0]+1;
		
		for(int i = 0 ; i <= len2 ; i++){
			for(int j = 0 ; j <= len1 ; j++){
				if( i == 0) d[0][i] = i;
				else if (j == 0) d[j][0] = j;
				else if(s2[i-1] == s1[j-1])
					d[i][j] = d[i-1][j-1];
				else
					d[i][j] = min(d[i-1][j],d[i][j-1],d[i-1][j-1])+1;
			}
		}

		printf("%d\n", d[len2][len1]);
//
//		delete[] s1; delete[] s2;
//		for(int i = 0; i <= len2; ++i)
  //  		delete[] d[i];
    //	delete[] d;
    	

	}


}


/*

2
4 5
geek gesek
84 87
lrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarcbynecdyggxxpklorellnmpapqfwkhopkmcoq hnwnkuewhsqmgbbuqcljjivswmdkqtbxixmvtrrbljptnsnfwzqfjmafadrrwsofsbcnuvqhffbsaqxwpqcaceh

*/