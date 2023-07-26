////#pragma warning(disable : 4996)
//////Cpp Comprehensive PT III - bellmanFordShortestPathAlgorithm
//
//#include <iostream>
//#include <vector>
//
//#define INF 99999  // define "infinity" as a large number
//
//void floydWarshall(const std::vector<std::vector<int>>& graph) {
//    int V = graph.size();
//
//    // dist[][] will be the output matrix that will finally have the shortest distances between every pair of vertices
//    std::vector<std::vector<int>> dist(V, std::vector<int>(V));
//
//    // Initialize the solution matrix same as input graph matrix.
//    for (int i = 0; i < V; i++)
//        for (int j = 0; j < V; j++)
//            dist[i][j] = graph[i][j];
//
//    // Pick all vertices one by one as the source
//    for (int k = 0; k < V; k++) {
//        // Pick all vertices as destination for the above picked source
//        for (int i = 0; i < V; i++) {
//            // Pick all vertices as source to try all destinations
//            for (int j = 0; j < V; j++) {
//                // If vertex k is on the shortest path from i to j, then update the value of dist[i][j]
//                if (dist[i][j] > dist[i][k] + dist[k][j])
//                    dist[i][j] = dist[i][k] + dist[k][j];
//            }
//        }
//    }
//
//    // Print the shortest distance matrix
//    std::cout << "Following matrix shows the shortest distances between every pair of vertices \n";
//    for (int i = 0; i < V; i++) {
//        for (int j = 0; j < V; j++) {
//            if (dist[i][j] == INF)
//                std::cout << "INF" << " ";
//            else
//                std::cout << dist[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//}
//
//
//int main() 
//{
//    std::vector<std::vector<int>> graph = { {0, 5, INF, 10},
//                                            {INF, 0, 3, INF},
//                                            {INF, INF, 0, 1},
//                                            {INF, INF, INF, 0} };
//
//    // Print the solution
//    floydWarshall(graph);
//    return 0;
//}
