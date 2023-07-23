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
//    // Adjacency matrix
//    std::vector<std::vector<int>> adjMatrix;
//
//    // Constructor 
//    Graph(int V);
//
//    // Function to add an edge to graph
//    void addEdge(int src, int dest);
//
//    // Print the graph
//    void printGraph();
//};
//
//Graph::Graph(int V) : vertices(V) {
//    // Create a V x V matrix filled with 0s
//    adjMatrix = std::vector<std::vector<int>>(V, std::vector<int>(V, 0));
//}
//
//void Graph::addEdge(int src, int dest) {
//    // In an adjacency matrix, if an edge exists from src to dest, we set adjMatrix[src][dest] = 1
//    adjMatrix[src][dest] = 1;
//}
//
//void Graph::printGraph() {
//    for (int i = 0; i < vertices; ++i) {
//        for (int j = 0; j < vertices; ++j) {
//            std::cout << adjMatrix[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//}
//
//int main() {
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
//    g.printGraph();
//
//    return 0;
//}
//
