//#pragma warning(disable : 4996)
//////Cpp Comprehensive PT III - djikstrasShortestPathAlgorithm
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <climits>
//
//// Custom comparator for priority queue
//struct compare {
//    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) {
//        return a.second > b.second;
//    }
//};
//
//class Graph {
//    int V;  // Number of vertices
//    std::vector<std::pair<int, int>>* adj;  // adjacency list representation
//
//public:
//    Graph(int V);
//
//    // add an edge to the graph
//    void addEdge(int u, int v, int w);
//
//    // print shortest path from source s
//    void dijkstra(int s);
//};
//
//Graph::Graph(int V) {
//    this->V = V;
//    adj = new std::vector<std::pair<int, int>>[V];
//}
//
//void Graph::addEdge(int u, int v, int w) {
//    adj[u].push_back(std::make_pair(v, w));
//    adj[v].push_back(std::make_pair(u, w));  // assuming this is an undirected graph
//}
//
//void Graph::dijkstra(int s) {
//    // Create a priority queue to store vertices
//    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, compare> pq;
//
//    // Vector for distances, initialize with maximum possible distance
//    std::vector<int> dist(V, INT_MAX);
//
//    // Insert source itself in priority queue and initialize its distance as 0.
//    pq.push(std::make_pair(s, 0));
//    dist[s] = 0;
//
//    while (!pq.empty()) {
//        int u = pq.top().first;
//        pq.pop();
//
//        // 'i' is used to get all adjacent vertices of a vertex
//        for (auto i = adj[u].begin(); i != adj[u].end(); ++i) {
//            int v = (*i).first;
//            int weight = (*i).second;
//
//            // If there is a shorter path to v through u
//            if (dist[v] > dist[u] + weight) {
//                dist[v] = dist[u] + weight;
//                pq.push(std::make_pair(v, dist[v]));
//            }
//        }
//    }
//
//    std::cout << "Vertex Distance from Source\n";
//    for (int i = 0; i < V; ++i) {
//        std::cout << i << "\t\t" << dist[i] << "\n";
//    }
//}
//
//int main() {
//    Graph g(5);
//
//    g.addEdge(0, 1, 9);
//    g.addEdge(0, 2, 6);
//    g.addEdge(0, 3, 5);
//    g.addEdge(0, 4, 3);
//    g.addEdge(2, 1, 2);
//    g.addEdge(2, 3, 4);
//
//    g.dijkstra(0);
//
//    return 0;
//}
