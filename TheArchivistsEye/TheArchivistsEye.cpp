#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
public:
    int minChambers(vector<vector<int>>& rituals) {
        sort(rituals.begin(), rituals.end());

        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (auto& r : rituals) {
            int s = r[0], e = r[1];
            if (!minHeap.empty() && minHeap.top() <= s) {
                minHeap.pop();
            }
            minHeap.push(e);
        }

        return (int)minHeap.size();
    }
};