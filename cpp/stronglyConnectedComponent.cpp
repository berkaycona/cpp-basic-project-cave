//#include <iostream>
//#include <vector>
//#include <stack>
//#include <unordered_set>
//using namespace std;
//
//class Graph {
//    int V;
//    vector<vector<int>> adj;
//
//public:
//    Graph(int V);
//
//    void addEdge(int u, int v);
//
//    void DFSUtil(int v, vector<bool>& visited, unordered_set<int>& component);
//
//    Graph getTranspose();
//
//    void fillOrder(int v, vector<bool>& visited, stack<int>& st);
//
//    void printSCCs();
//};
//
//Graph::Graph(int V) : V(V)
//{
//    adj.resize(V);
//}
//void Graph::addEdge(int u, int v)
//{
//    adj[u].push_back(v);
//}
//
//void Graph::DFSUtil(int v, vector<bool>& visited, unordered_set<int>& component)
//{
//    visited[v] = true;
//    component.insert(v);
//
//    for (int i : adj[v]) {
//        if (!visited[i]) {
//            DFSUtil(i, visited, component);
//        }
//    }
//}
//
//Graph Graph:: getTranspose()
//{
//    Graph g(V);
//
//    for (int v = 0; v < V; v++) {
//        for (int i : adj[v]) {
//            g.addEdge(i, v);
//        }
//    }
//
//    return g;
//}
//
//void Graph::fillOrder(int v, vector<bool>& visited, stack<int>& st)
//{
//    visited[v] = true;
//
//    for (int i : adj[v]) {
//        if (!visited[i]) {
//            fillOrder(i, visited, st);
//        }
//    }
//
//    st.push(v);
//}
//
//void Graph::printSCCs()
//{
//    stack<int> st;
//    vector<bool> visited(V, false);
//
//    for (int i = 0; i < V; i++) {
//        if (!visited[i]) {
//            fillOrder(i, visited, st);
//        }
//    }
//
//    Graph transposedGraph = getTranspose();
//
//    fill(visited.begin(), visited.end(), false);
//
//    while (!st.empty()) {
//        int v = st.top();
//        st.pop();
//
//        if (!visited[v]) {
//            unordered_set<int> component;
//            transposedGraph.DFSUtil(v, visited, component);
//            cout << "SCC: ";
//            for (int node : component) {
//                cout << node << " ";
//            }
//            cout << endl;
//        }
//    }
//}
//
//int main() {
//    Graph g(5);
//    g.addEdge(1, 0);
//    g.addEdge(0, 2);
//    g.addEdge(2, 1);
//    g.addEdge(0, 3);
//    g.addEdge(3, 4);
//
//    cout << "Strongly Connected Components:\n";
//    g.printSCCs();
//
//    return 0;
//}
