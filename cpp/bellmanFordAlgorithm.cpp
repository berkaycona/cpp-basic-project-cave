//#pragma warning(disable : 4996)
////Cpp Comprehensive PT III - bellmanFordShortestPathAlgorithm
//
//#include <iostream>
//#include <vector>
//#include <climits>
//
//struct Edge {
//    int src, dest, weight;
//};
//
//class Graph {
//    int V, E;
//    std::vector<Edge> edges;
//
//public:
//    Graph(int V, int E);
//    void addEdge(int src, int dest, int weight);
//    void bellmanFord(int src);
//};
//
//Graph::Graph(int V, int E) {
//    this->V = V;
//    this->E = E;
//}
//
//void Graph::addEdge(int src, int dest, int weight) {
//    Edge edge{ src, dest, weight };
//    edges.push_back(edge);
//}
//
//void Graph::bellmanFord(int src) {
//    std::vector<int> dist(V, INT_MAX);
//    dist[src] = 0;
//
//    for (int i = 1; i <= V - 1; i++) {
//        for (const auto& edge : edges) {
//            int u = edge.src;
//            int v = edge.dest;
//            int weight = edge.weight;
//            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
//                dist[v] = dist[u] + weight;
//        }
//    }
//
//    // check for negative weight cycles
//    for (const auto& edge : edges) {
//        int u = edge.src;
//        int v = edge.dest;
//        int weight = edge.weight;
//        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
//            std::cout << "Graph contains negative weight cycle" << std::endl;
//            return;
//        }
//    }
//
//    std::cout << "Vertex Distance from Source\n";
//    for (int i = 0; i < V; ++i)
//        std::cout << i << "\t\t" << dist[i] << "\n";
//}
//
//int main() {
//    int V = 5;  // Number of vertices
//    int E = 8;  // Number of edges
//    Graph g(V, E);
//
//    // add edge 0->1
//    g.addEdge(0, 1, -1);
//    // add edge 0->2
//    g.addEdge(0, 2, 4);
//    // add edge 1->2
//    g.addEdge(1, 2, 3);
//    // add edge 1->3
//    g.addEdge(1, 3, 2);
//    // add edge 1->4
//    g.addEdge(1, 4, 2);
//    // add edge 3->2
//    g.addEdge(3, 2, 5);
//    // add edge 3->1
//    g.addEdge(3, 1, 1);
//    // add edge 4->3
//    g.addEdge(4, 3, -3);
//
//    g.bellmanFord(0);
//
//    return 0;
//}
