#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[30][2];

void preorder(int x){
	if (x == -1) return;
    cout << (char)(x+'A');
    preorder(a[x][0]);
    preorder(a[x][1]);
}

void inorder(int x){
	if (x == -1) return;
	inorder(a[x][0]);
    cout << (char)(x+'A');
    inorder(a[x][1]);
}

void postorder(int x){
	if (x == -1) return;
	postorder(a[x][0]);
	postorder(a[x][1]);
    cout << (char)(x+'A');
}


int main(){
	int N;
	cin >> N;
	int tree[N][3];

	for(int i = 0 ; i < N ; i++){
		// scanf("%c %c %c", &tree[i][0], &tree[i][1], &tree[i][2] );
		char x,y,z;
		cin >> x >> y >> z;
		x = x-'A';
        if (y == '.') {
            a[x][0] = -1;
        } else {
            a[x][0] = y-'A';
        }
        if (z == '.') {
            a[x][1] = -1;
        } else {
            a[x][1] = z-'A';
        }

	}

	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postorder(0);
	cout << '\n';

	return 0;
}