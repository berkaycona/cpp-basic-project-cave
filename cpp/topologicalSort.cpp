////////#pragma warning(disable : 4996)
//////////Cpp Comprehensive PT III - topologicalSort
//
//#include <iostream>
//#include <list>
//#include <stack>
//#include <vector>
//
//
//class Graph {
//    int V;    // No. of vertices
//    std::list<int>* adj;    // Pointer to an array containing adjacency lists
//
//public:
//    Graph(int V);   // Constructor
//    void addEdge(int v, int w);   // Function to add an edge to graph
//    void topologicalSort();    // prints a Topological Sort of the complete graph
//    void topologicalSortUtil(int v, std::vector<bool>& visited, std::stack<int>& Stack);//DFS
//};
//
//Graph::Graph(int V) {
//    this->V = V;
//    adj = new std::list<int>[V];
//}
//
//void Graph::addEdge(int v, int w) {
//    adj[v].push_back(w); // Add w to v’s list.
//}
//
//void Graph::topologicalSort() {
//    std::stack<int> Stack;
//    std::vector<bool> visited(V, false);
//
//    for (int i = 0; i < V; i++)
//        if (!visited[i])
//            topologicalSortUtil(i, visited, Stack);
//
//    while (!Stack.empty()) {
//        std::cout << Stack.top() << " ";
//        Stack.pop();
//    }
//}
//
//void Graph::topologicalSortUtil(int v, std::vector<bool>& visited, std::stack<int>& Stack) {
//    visited[v] = true;  // Mark the current node as visited.
//    std::list<int>::iterator i;
//
//    for (i = adj[v].begin(); i != adj[v].end(); ++i)
//        if (!visited[*i])
//            topologicalSortUtil(*i, visited, Stack);
//
//    Stack.push(v);
//}
//
//int main() {
//    Graph g(6);
//    g.addEdge(5, 2);
//    g.addEdge(5, 0);
//    g.addEdge(4, 0);
//    g.addEdge(4, 1);
//    g.addEdge(2, 3);
//    g.addEdge(3, 1);
//
//    std::cout << "Following is a Topological Sort of the given graph \n";
//    g.topologicalSort();
//
//    return 0;
//}		