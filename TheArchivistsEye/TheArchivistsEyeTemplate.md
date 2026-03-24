# The Archivist's Eye — Starter Templates

## C++
```cpp
#include <vector>
using namespace std;

class Solution {
public:
    // rituals[i] = {start, end} representing time interval [start, end)
    // Two rituals conflict if one starts strictly before the other ends
    // Returns: minimum number of chambers required
    int minChambers(vector<vector<int>>& rituals) {
        
    }
};
```

## C
```c
#include <stdlib.h>

// rituals: flat array of length 2*n, rituals[2*i] = start, rituals[2*i+1] = end
// Interval is [start, end); two rituals conflict if one starts strictly before the other ends
// Returns: minimum number of chambers required
int minChambers(int* rituals, int n) {
    
}
```

## Python
```python
class Solution:
    def minChambers(self, rituals: list[list[int]]) -> int:
        # rituals[i] = [start, end] representing time interval [start, end)
        # Two rituals conflict if one starts strictly before the other ends
        # Returns: minimum number of chambers required
        pass
```

## Java
```java
import java.util.*;

class Solution {
    // rituals.get(i) = {start, end} representing time interval [start, end)
    // Two rituals conflict if one starts strictly before the other ends
    // Returns: minimum number of chambers required
    public int minChambers(List<List<Integer>> rituals) {
        
    }
}
```

## JavaScript
```javascript
/**
 * @param {number[][]} rituals - rituals[i] = [start, end] representing [start, end)
 * Two rituals conflict if one starts strictly before the other ends
 * @return {number} - minimum number of chambers required
 */
var minChambers = function(rituals) {
    
};
```