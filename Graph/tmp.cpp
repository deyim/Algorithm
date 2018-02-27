/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The function takes an adjacency list representation of the graph g
    and two integers N and M as specified in the problem statement
    You are required to complete this method. 

visiting 1
visiting 3
visiting 2
pushing 2
pushing 3
visiting 4
visiting 5
pushing 5
pushing 4
pushing 1
0 1 2 3 4 
0 1 2 3 
visiting 1
visiting 2
visiting 3
0 1 2 
visiting 4
0 1 
visiting 5
0 
    */
#include <stack>
void fillOrder(vector<int> g[MAX], int v, bool visited[], stack<int> &Stack, bool flag)
{
    visited[v] = true;
    // printf("visiting %d\n", v);

    vector<int>::iterator i;
    for(i = g[v].begin(); i != g[v].end(); ++i){
        if(!visited[*i])
            fillOrder(g, *i, visited, Stack, flag);
    }
    if(flag==true){
        Stack.push(v);
        // printf("pushing %d\n", v);
    }
}

int kosaraju(vector<int> g[MAX], int N, int M)
{
    // Your code here
    stack<int> Stack;
    vector<int> gt[MAX];
    bool flag = true;
    bool visited[MAX]={false};
    
   // for(int i = 1 ; i <= N; i++) 
     //   visited[i] = false;

    for(int i = 1 ; i <= N; i++)
    {
        if(visited[i] == false)
            fillOrder(g, i, visited, Stack, flag);
    }

   for(int v = 1 ; v <= N; v++){
        vector<int>::iterator i;
        for(i =  g[v].begin(); i != g[v].end(); ++i)
            gt[*i].push_back(v);
    }

    for(int i = 0 ; i <= N; i++) 
        visited[i] = false;

    int cnt = 0; flag = false;
    // for(int i =  0; i != Stack.size(); ++i)
    //     cout << i << " ";
    // cout << endl;
    
    while(!Stack.empty()){
        int k = Stack.top();
        Stack.pop();
        for(int i =  0; i != Stack.size(); ++i)
            cout << i << " ";
        cout << endl;

        if(!visited[k]){
            fillOrder(gt,k,visited,Stack,flag);
            cnt++;
        }
    }
    
    return cnt;
}