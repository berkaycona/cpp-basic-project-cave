//#pragma warning(disable : 4996)
////Cpp Comprehensive PT III - kruskallsAlgorithm
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//struct Edge {
//    int src, dest, weight;
//};
//
//struct Graph {
//    int V, E;
//    std::vector<Edge> edges;
//
//    Graph(int V, int E) : V(V), E(E) {
//        edges.resize(E);
//    }
//};
//
//struct DisjointSets {
//    std::vector<int> parent;
//    std::vector<int> rank;
//    int n;
//
//    DisjointSets(int n) : n(n) {
//        parent.resize(n + 1);
//        rank.resize(n + 1);
//
//        for (int i = 0; i <= n; i++) {
//            rank[i] = 0;
//            parent[i] = i;
//        }
//    }
//
//    int find(int u) {
//        if (u != parent[u])
//            parent[u] = find(parent[u]);
//        return parent[u];
//    }
//
//    void merge(int x, int y) {
//        x = find(x), y = find(y);
//
//        if (rank[x] > rank[y])
//            parent[y] = x;
//        else
//            parent[x] = y;
//
//        if (rank[x] == rank[y])
//            rank[y]++;
//    }
//};
//
//int kruskal(Graph* graph) {
//    int V = graph->V;
//    std::vector<Edge> result(V);
//    std::sort(graph->edges.begin(), graph->edges.end(), [](Edge a, Edge b) {
//        return a.weight < b.weight;
//        });
//
//    DisjointSets ds(V);
//
//    int e = 0;  // index variable for result[]
//    int i = 0;  // index variable for sorted edges
//
//    while (e < V - 1 && i < graph->E) {
//        Edge next_edge = graph->edges[i++];
//
//        int x = ds.find(next_edge.src);
//        int y = ds.find(next_edge.dest);
//
//        if (x != y) {
//            result[e++] = next_edge;
//            ds.merge(x, y);
//        }
//    }
//
//    int minimumCost = 0;
//    for (i = 0; i < e; ++i) {
//        std::cout << result[i].src << " -- " << result[i].dest << " == " << result[i].weight << std::endl;
//        minimumCost += result[i].weight;
//    }
//
//    return minimumCost;
//}
//
//int main() {
//    int V = 4, E = 5;
//    Graph graph(V, E);
//
//    graph.edges[0] = { 0, 1, 10 };
//    graph.edges[1] = { 0, 2, 6 };
//    graph.edges[2] = { 0, 3, 5 };
//    graph.edges[3] = { 1, 3, 15 };
//    graph.edges[4] = { 2, 3, 4 };
//
//    std::cout << "Edges of MST are\n";
//    int mst_wt = kruskal(&graph);
//
//    std::cout << "\nWeight of MST is " << mst_wt;
//
//    return 0;
//}
