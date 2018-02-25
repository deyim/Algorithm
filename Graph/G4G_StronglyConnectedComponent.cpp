// C++ Implementation of Kosaraju's algorithm to print all SCCs
#include <iostream>
#include <list>
#include <stack>
#include <vector>
using namespace std;
#define MAX 1000
 
class Graph
{
    int V;    // No. of vertices
    vector<int> *adj;    // An array of adjacency lists
    // A recursive function to print DFS starting from v
    void DFSUtil(int v, bool visited[], int *count);
public:
    Graph(int V);
    void addEdge(int v, int w);
    void SCC();
    int kosaraju(vector<int> g[MAX], int N, int M);
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new vector<int>[V];
}
 
// A recursive function to print DFS starting from v
void Graph::DFSUtil(int v, bool visited[], int *count)
{
    // Mark the current node as visited and print it
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    vector<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i]){
            DFSUtil(*i, visited, count);
            (*count)++;
            printf("%d %d %d\n", v, *i, *count);
        }
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::SCC()
{
    bool visited[this->V];
    int count = 0;

    for(int i = 0 ; i < this->V ; i++)
        visited[i] = false;

    for(int i = 0; i < this->V ; i++){
        if(visited[i] != true){
            DFSUtil(i, visited, &count);
        }
    }
    printf("%d\n", count);
}

int kosaraju(vector<int> g[MAX], int N, int M)
{
    return 0;
}
 
// Driver program to test above functions
int main()
{
    int T, N, M;
    int u,v;
    cin >> T;

    while(T--){
        cin >> N >> M;
        Graph g(N);
        while(M--){
            scanf("%d%d", &u, &v);
            g.addEdge(u-1,v-1);
        }
        g.SCC();
 
    }
    
    
    return 0;
}