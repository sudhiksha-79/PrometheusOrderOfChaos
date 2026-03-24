#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    long long minRepairCost(int n, vector<vector<int>>& corridors) {
        vector<vector<pair<long long,int>>> adj(n + 1);
        for (auto& c : corridors) {
            int u = c[0], v = c[1];
            long long w = c[2];
            adj[u].push_back({w, v});
            adj[v].push_back({w, u});
        }

        // Prim's algorithm
        vector<bool> powered(n + 1, false);
        priority_queue<pair<long long,int>,
                       vector<pair<long long,int>>,
                       greater<pair<long long,int>>> pq;

        pq.push({0LL, 1}); 
        long long totalCost = 0;
        int modulesPowered = 0;

        while (!pq.empty() && modulesPowered < n) {
            auto [cost, u] = pq.top(); pq.pop();
            if (powered[u]) continue;

            powered[u] = true;
            totalCost += cost;
            modulesPowered++;

            for (auto& [w, v] : adj[u])
                if (!powered[v]) pq.push({w, v});
        }

        return (modulesPowered < n) ? -1LL : totalCost;
    }
};