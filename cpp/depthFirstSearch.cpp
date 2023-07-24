//////#pragma warning(disable : 4996)
////////Cpp Comprehensive PT III - depthFirstSearch
//
//#include <iostream>
//#include <vector>
//
//class Graph {
//    int V;  // Number of vertices
//
//    // Vector of vectors for adjacency list representation
//    std::vector<std::vector<int>> adj;
//
//    // A recursive function used by DFS
//    void DFSUtil(int v, std::vector<bool>& visited);
//
//public:
//    Graph(int V);   
//
//    // function to add an edge to graph
//    void addEdge(int v, int w);
//
//    // DFS traversal of the vertices reachable from v
//    void DFS(int v);
//};
//
//Graph::Graph(int V) {
//    this->V = V;
//    adj.resize(V);
//}
//
//void Graph::addEdge(int v, int w) {
//    adj[v].push_back(w);  // Add w to v’s list.
//}
//
//void Graph::DFSUtil(int v, std::vector<bool>& visited) {
//    // Mark the current node as visited and print it
//    visited[v] = true;
//    std::cout << v << " ";
//
//    // Recur for all the vertices adjacent to this vertex
//    for (auto i = adj[v].begin(); i != adj[v].end(); ++i) {
//        if (!visited[*i]) {
//            DFSUtil(*i, visited);
//        }
//    }
//}
//
//// DFS traversal of the vertices reachable from v
//// It uses recursive DFSUtil()
//void Graph::DFS(int v) {
//    // Mark all the vertices as not visited
//    std::vector<bool> visited(V, false);
//
//    // Call the recursive helper function to print DFS traversal
//    DFSUtil(v, visited);
//}
//
//
//int main() {
//    Graph g(4);
//
//    g.addEdge(0, 1);
//    g.addEdge(0, 2);
//    g.addEdge(1, 2);
//    g.addEdge(2, 0);
//    g.addEdge(2, 3);
//    g.addEdge(3, 3);
//
//    std::cout << "Depth First Traversal (starting from vertex 2): ";
//    g.DFS(2);
//
//    return 0;
//}
