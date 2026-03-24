# Embers of the Iron Meridian — Starter Templates

## C++
```cpp
#include <vector>
using namespace std;

class Solution {
public:
    // n: number of modules (1-indexed, module 1 starts powered)
    // corridors[i] = {u, v, w} where u, v are modules and w is repair cost
    // Returns: minimum total cost to power all modules, or -1 if impossible
    long long minRepairCost(int n, vector<vector<int>>& corridors) {
        
    }
};
```

## C
```c
#include <stdlib.h>

// n: number of modules (1-indexed, module 1 starts powered)
// corridors: flat array of length 3*m, corridors[3*i]=u, corridors[3*i+1]=v, corridors[3*i+2]=w
// m: number of corridors
// Returns: minimum total cost, or -1 if impossible
long long minRepairCost(int n, int* corridors, int m) {
    
}
```

## Python
```python
class Solution:
    def minRepairCost(self, n: int, corridors: list[list[int]]) -> int:
        # n: number of modules (1-indexed, module 1 starts powered)
        # corridors[i] = [u, v, w] where u, v are modules and w is repair cost
        # Returns: minimum total cost to power all modules, or -1 if impossible
        pass
```

## Java
```java
import java.util.*;

class Solution {
    // n: number of modules (1-indexed, module 1 starts powered)
    // corridors.get(i) = [u, v, w] where u, v are modules and w is repair cost
    // Returns: minimum total cost to power all modules, or -1 if impossible
    public long minRepairCost(int n, List<List<Integer>> corridors) {
        
    }
}
```

## JavaScript
```javascript
/**
 * @param {number} n - number of modules (1-indexed, module 1 starts powered)
 * @param {number[][]} corridors - corridors[i] = [u, v, w] where u, v are modules and w is repair cost
 * @return {number} - minimum total cost to power all modules, or -1 if impossible
 */
var minRepairCost = function(n, corridors) {
    
};
```