#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;
typedef pair<int,int> ii;
vector<ii> moves = {ii(1,0),ii(0,1),ii(-1,0),ii(0,-1)};
int cur_size = 0;

void DFS(vector<vector<int>> &picture, int m, int n, int x, int y, int cur_color){
    int newX, newY;
    cur_size++;
    picture[x][y] = 0;

    for(int i = 0 ; i < 4 ; i++){        
        ii tmp = moves[i];
        newX = x + tmp.first; newY = y + tmp.second;
        
        if(newY >= n || newY < 0 || newX < 0 || newX >= m){
            continue;
        }
          
        if(picture[newX][newY] == cur_color){
            DFS(picture, m, n, newX, newY, cur_color);
        }
    }
    return;
}


// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    int cur_color=0;
    
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d", &picture[i][j]);
        }
    }

  
   for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(picture[i][j] != 0){
                cur_color = picture[i][j];
                cur_size = 0;
                DFS(picture, m, n, i, j, cur_color);
                number_of_area++;
                if ( cur_size > max_size_of_one_area)
                    max_size_of_one_area = cur_size;
               
            }          
            
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}