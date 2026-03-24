#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> survivedJourney(vector<int>& zones, vector<vector<int>>& queries) {
        int n = (int)zones.size();

        // Build prefix sum array 
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + zones[i];

        // Sparse table 
        int LOG = 1;
        while ((1 << LOG) <= n) LOG++;

        vector<int> lg(n + 1, 0);
        for (int i = 2; i <= n; i++)
            lg[i] = lg[i / 2] + 1;

        vector<vector<long long>> sparse(n + 1, vector<long long>(LOG, 0));
        for (int i = 1; i <= n; i++)
            sparse[i][0] = prefix[i];

        for (int j = 1; j < LOG; j++)
            for (int i = 1; i + (1 << j) - 1 <= n; i++)
                sparse[i][j] = min(sparse[i][j-1],
                                   sparse[i + (1 << (j-1))][j-1]);

        auto queryMin = [&](int l, int r) -> long long {
            int lo = l + 1, hi = r + 1;
            int k = lg[hi - lo + 1];
            return min(sparse[lo][k], sparse[hi - (1 << k) + 1][k]);
        };

        vector<string> result;
        result.reserve((int)queries.size());
        for (auto& q : queries) {
            int l = q[0], r = q[1];
            result.push_back(queryMin(l, r) >= prefix[l] ? "YES" : "NO");
        }
        return result;
    }
};