// C++ Implementation of Kosaraju's algorithm to print all SCCs

/*
URL: https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1

*/

#include <iostream>
#include <list>
#include <stack>
#include <vector>
using namespace std;
 
class Graph
{
    int V;    // No. of vertices
    vector<int> *adj;    // An array of adjacency lists
 
    // Fills Stack with vertices (in increasing order of finishing
    // times). The top element of stack has the maximum finishing 
    // time
    void fillOrder(int v, bool visited[], stack<int> &Stack); 
    // A recursive function to print DFS starting from v
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);
    void addEdge(int v, int w); 
    // The main function that finds and prints strongly connected
    // components
    void printSCCs();
 
    // Function that returns reverse (or transpose) of this graph
    Graph getTranspose();
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new vector<int>[V];
}
 
// A recursive function to print DFS starting from v
void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";

    vector<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);   
}
 
Graph Graph::getTranspose()
{
    Graph g(V);
    for(int v = 0 ; v < V; v++){

        vector<int>::iterator i;
        for(i =  adj[v].begin(); i!= adj[v].end(); ++i)
            g.adj[*i].push_back(v);
    }
    return g;
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
 
void Graph::fillOrder(int v, bool visited[], stack<int> &Stack)
{
    visited[v] = true;

    vector<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i){
        if(!visited[*i])
            fillOrder(*i, visited, Stack);
    }
    Stack.push(v);
}
 
// The main function that finds and prints all strongly connected 
// components
void Graph::printSCCs()
{
    stack<int> Stack;
    bool *visited = new bool[V];

    for(int i = 0 ; i < V; i++) 
        visited[i] = false;

    for(int i = 0 ; i < V; i++)
    {
        if(visited[i] == false)
            fillOrder(i, visited, Stack);
    }

   Graph GT = getTranspose();

    for(int i = 0 ; i < V; i++) 
        visited[i] = false;

    while(!Stack.empty()){

        int v = Stack.top();
        Stack.pop();

        if(!visited[v]){
            GT.DFSUtil(v,visited);
            cout << endl;
        }
    }
}
 
// Driver program to test above functions
int main()
{
    // Create a graph given in the above diagram
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);
 
    cout << "Following are strongly connected components in "
            "given graph \n";
    g.printSCCs();
 
    return 0;
}