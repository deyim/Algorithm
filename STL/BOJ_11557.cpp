#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
  int TC;
  cin >> TC;
  map<string, int> mp;

  while(TC--){
    int SchoolNum;
    cin >> SchoolNum;
    mp.clear();
    while(SchoolNum--){
      int consume;
      string school;
      cin >> school;
      scanf("%d", &consume);
      mp[school] += consume;
    }

    int TCmaxnum = -10000;
    string TCmaxschool;
    for( auto it:mp){
      if(it.second > TCmaxnum){
        TCmaxnum = it.second;
        TCmaxschool = it.first;
      }
    }

  cout << TCmaxschool << endl;
  }
}
