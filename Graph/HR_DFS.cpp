//https://www.hackerrank.com/challenges/ctci-connected-cell-in-a-grid/problem

#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int Cnt = 0;

void dfs(vector< vector<int> > &grid, int m , int n){
    //int Cnt = 0 ;
    for(int i = -1; i <= 1 ; i++){
        for(int j = -1 ; j <= 1; j++){
            if(i == 0 && j == 0) 
                continue;
            else if(m+i < 0 && n+j < 0 && m+i>=grid.size())
                continue;
            else if(n+j >= grid[m+i].size())
                continue;
            else if(grid[m+i][n+j]==1){
                Cnt++; grid[m+i][n+j] = 0;
                dfs(grid, m+i, n+j);
            }
        }
    }        
}

int get_biggest_region(vector< vector<int> > grid) {
    int maxCnt=-1; 
    int j;

    for(int i = 0 ; i < grid.size(); i++){
        for(int j = 0 ; j < grid[i].size(); j++){
            if(grid[i][j] != 0 ){
                grid[i][j]=0; Cnt++;
                dfs(grid, i, j);
            }
            if(maxCnt < Cnt)
                maxCnt = Cnt;
            Cnt = 0;
        }
    }
    return maxCnt;
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector< vector<int> > grid(n,vector<int>(m));
    for(int grid_i = 0;grid_i < n;grid_i++){
       for(int grid_j = 0;grid_j < m;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    cout << get_biggest_region(grid) << endl;
    return 0;
}