# The Sunken Oracle — Starter Templates

## C++
```cpp
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    // zones: 0-indexed array of energy values
    // queries[i] = {l, r}, 0-indexed inclusive (0 <= l <= r <= n-1)
    // Returns: "YES" if diver survives, "NO" if diver perishes
    vector<string> survivedJourney(vector<int>& zones, vector<vector<int>>& queries) {
        
    }
};
```

## C
```c
#include <stdlib.h>
#include <string.h>

// zones: array of length n, 0-indexed (zones[0]..zones[n-1])
// queries: flat array of length 2*q, queries[2*i] = l, queries[2*i+1] = r
//          0-indexed inclusive (0 <= l <= r <= n-1)
// result: pre-allocated array of strings of length q
// Fill result[i] with "YES" or "NO"
void survivedJourney(int* zones, int n, int* queries, int q, char** result) {
    
}
```

## Python
```python
class Solution:
    def survivedJourney(self, zones: list[int], queries: list[list[int]]) -> list[str]:
        # zones: 0-indexed list of energy values
        # queries[i] = [l, r], 0-indexed inclusive (0 <= l <= r <= n-1)
        # Returns: list of "YES" or "NO"
        pass
```

## Java
```java
import java.util.*;

class Solution {
    // zones: 0-indexed array of energy values
    // queries.get(i) = {l, r}, 0-indexed inclusive (0 <= l <= r <= n-1)
    // Returns: list of "YES" or "NO"
    public List<String> survivedJourney(int[] zones, List<List<Integer>> queries) {
        
    }
}
```

## JavaScript
```javascript
/**
 * @param {number[]} zones - 0-indexed array of energy values
 * @param {number[][]} queries - queries[i] = [l, r], 0-indexed inclusive (0 <= l <= r <= n-1)
 * @return {string[]} - list of "YES" or "NO"
 */
var survivedJourney = function(zones, queries) {
    
};
```