////#pragma warning(disable : 4996)
//////Cpp Comprehensive PT III - depthFirstSearch
//#include <iostream>
//#include <vector>
//#include <queue>
//
//// Class definition for representing the graph
//class Graph {
//    int V; // Number of vertices
//
//    // Vector of vectors for adjacency list representation
//    std::vector<std::vector<int>> adj;
//
//public:
//    Graph(int V);  
//
//    // function to add an edge to graph
//    void addEdge(int v, int w);
//
//    // prints BFS traversal from a given source s
//    void BFS(int s);
//};
//
//Graph::Graph(int V)
//{
//    this->V = V;
//    adj.resize(V);  // Resizing the adjacency list to fit all vertices
//}
//
//void Graph::addEdge(int v, int w)
//{
//    adj[v].push_back(w); // Add w to v’s list.
//}
//
//void Graph::BFS(int s)
//{
//    // Create a visited array and mark all vertices as not visited
//    std::vector<bool> visited(V, false);
//
//    // Create a queue for BFS
//    std::queue<int> queue;
//
//    // Mark the current node as visited and enqueue it
//    visited[s] = true;
//    queue.push(s);
//
//    while (!queue.empty())
//    {
//        // Dequeue a vertex from queue and print it
//        s = queue.front();
//        std::cout << s << " ";
//        queue.pop();
//
//        // Get all adjacent vertices of the dequeued
//        // vertex s. If an adjacent has not been visited, 
//        // then mark it visited and enqueue it
//        for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
//        {
//            if (!visited[*i])
//            {
//                queue.push(*i);
//                visited[*i] = true;
//            }
//        }
//    }
//}
//
//int main()
//{
//    Graph g(4);
//
//    g.addEdge(0, 1);
//    g.addEdge(0, 2);
//    g.addEdge(1, 2);
//    g.addEdge(2, 0);
//    g.addEdge(2, 3);
//    g.addEdge(3, 3);
//
//    std::cout << "Breadth First Traversal (starting from vertex 2): ";
//    g.BFS(2);
//
//    return 0;
//}
//
