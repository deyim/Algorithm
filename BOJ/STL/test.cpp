#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);

    vector<int> s;
    for (int i=0; i<n; i++) {
        int x;
        scanf("%d",&x);
        s.push_back(x);
    }

    int m;
    scanf("%d",&m);

    for (int i=0; i<m; i++) {
        int x;
        scanf("%d",&x);
        printf("%d ",count(s.begin(),s.end(),x));
    }

    printf("\n");

    return 0;
}