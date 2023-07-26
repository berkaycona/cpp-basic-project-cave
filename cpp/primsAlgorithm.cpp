//#pragma warning(disable : 4996)
////Cpp Comprehensive PT III - primsAlgorithm
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//// This pair represents a node in the adjacency list 
//// and the weight of the edge connecting it
//typedef std::pair<int, int> iPair;
//
//class Graph {
//    int V;  // Number of vertices
//    std::vector<iPair>* adj;  // adjacency list representation
//
//public:
//    Graph(int V);
//
//    // add an edge to the graph
//    void addEdge(int u, int v, int w);
//
//    // print MST using Prim's algorithm
//    void primMST();
//};
//
//Graph::Graph(int V) {
//    this->V = V;
//    adj = new std::vector<iPair>[V];
//}
//
//void Graph::addEdge(int u, int v, int w) {
//    adj[u].push_back(std::make_pair(v, w));
//    adj[v].push_back(std::make_pair(u, w));  // assuming this is an undirected graph
//}
//
//void Graph::primMST() {
//    std::priority_queue<iPair, std::vector<iPair>, std::greater<iPair>> pq;
//    std::vector<int> key(V, INT_MAX);  // Initialize keys as infinite
//    std::vector<bool> inMST(V, false);  // To keep track of vertices included in MST
//    std::vector<int> parent(V, -1);  // To store parent array which in turn store MST
//
//    pq.push(std::make_pair(0, 0));  // Insert source itself in priority queue and initialize its key as 0.
//    key[0] = 0;
//
//    while (!pq.empty()) {
//        int u = pq.top().second;
//        pq.pop();
//
//        inMST[u] = true;  // Include vertex in MST
//
//        for (auto i = adj[u].begin(); i != adj[u].end(); ++i) {
//            int v = (*i).first;
//            int weight = (*i).second;
//
//            // If v is not in MST and weight of (u,v) is smaller than current key of v
//            if (inMST[v] == false && key[v] > weight) {
//                key[v] = weight;
//                pq.push(std::make_pair(key[v], v));
//                parent[v] = u;
//            }
//        }
//    }
//
//    // print edges of MST
//    for (int i = 1; i < V; ++i)
//        std::cout << parent[i] << " - " << i << std::endl;
//}
//
//int main() {
//    int V = 5;
//    Graph g(V);
//
//    g.addEdge(0, 1, 2);
//    g.addEdge(0, 3, 6);
//    g.addEdge(1, 2, 3);
//    g.addEdge(1, 3, 8);
//    g.addEdge(1, 4, 5);
//    g.addEdge(2, 4, 7);
//
//    g.primMST();
//
//    return 0;
//}
