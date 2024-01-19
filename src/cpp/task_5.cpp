/*
 * Author:
 * Date:
 * Name:
 */
#include <stack>
#include <unordered_set>
#include <limits>
#include <queue>
struct Edge {
    int target;
    int weight;
    Edge(int t, int w) : target(t), weight(w) {}
};
struct Node {
    int id;
    int distance;
    Node(int i, int d) : id(i), distance(d) {}
};
class Problem6 {
public:
    int time(const vector<vector<int>> times, int N, int K) {
        vector<vector<Edge>> graph(N + 1);
        for (const auto& time : times) {
            int source = time[0];
            int target = time[1];
            int weight = time[2];
            graph[source].emplace_back(target, weight);
        }
        vector<int> distances(N + 1, numeric_limits<int>::max());
        distances[K] = 0;
        auto compareNode = [](const auto& a, const auto& b) {
            return a.distance > b.distance;
        };
        priority_queue<Node, vector<Node>, decltype(compareNode)> minHeap(compareNode);
        minHeap.push(Node(K, 0));
        while (!minHeap.empty()) {
            Node current = minHeap.top();
            minHeap.pop();
            for (const Edge& edge : graph[current.id]) {
                int newDistance = current.distance + edge.weight;
                if (newDistance < distances[edge.target]) {
                    distances[edge.target] = newDistance;
                    minHeap.push(Node(edge.target, newDistance));
                }
            }
        }
        int maxTime = 0;
        for (int i = 1; i <= N; ++i) {
            if (distances[i] == numeric_limits<int>::max()) {
                return -1;
            }
            maxTime = max(maxTime, distances[i]);
        }
        return maxTime;
    }
};
