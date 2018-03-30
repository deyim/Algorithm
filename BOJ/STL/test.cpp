#include <iostream>
#include <set>
#include <vector>
#include <list>
using namespace std;
int main() {
    list<int> l = {2,1,-5,4,-3,6,7};

    l.sort([](int u, int v){
        return abs(u) < abs(v);
    });

    for(auto x : l){
        cout << x << " ";
    }
}