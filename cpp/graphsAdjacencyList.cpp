//#pragma warning(disable : 4996)
////Cpp Comprehensive PT III - graphsAdjacencyList
//#include <iostream>
//#include <vector>
//
//class Graph {
//public:
//    // Number of vertices
//    int vertices;
//
//    // Vector containing adjacency lists
//    std::vector<std::vector<int>> adj;
//
//    // Constructor 
//    Graph(int V) 
//    {
//        // Set the number of vertices
//        this->vertices = V;
//        // Create a vector with V elements, each element is an empty vector<int>
//        this->adj = std::vector<std::vector<int>>(V); 
//    }
//
//
//    // Function to add an edge to graph
//    void addEdge(int src, int dest)
//    {
//        adj[src].push_back(dest);  // Add dest to src’s list
//    }
//
//    // Print the graph
//    void printGraph()
//    {
//        for (int v = 0; v < vertices; ++v) 
//        {
//            std::cout << "\n Adjacency List of Vertex " << v << "\n head ";
//            for (auto x : adj[v])
//            {
//                std::cout << "-> " << x;
//            }                
//            std::cout << std::endl;
//        }
//    }
//};
//
////Same as auto in above
////for (std::vector<int>::iterator it = adj[v].begin(); it != adj[v].end(); ++it) {
////    std::cout << "-> " << *it;
////}
//
//
////Same as the above one, but shorter.
////Graph::Graph(int V) : vertices(V), adj(V) {
////}
//
//
//int main() 
//{
//    // Create the graph
//    Graph g(5);
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // Print the adjacency list 
//    //representation of the graph
//    g.printGraph();
//
//    return 0;
//}
