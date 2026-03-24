# The Sunken Oracle
**Difficulty: Medium**

## Problem

In the abyssal city of **Thalassyn**, an ancient Oracle guides divers through dangerous underwater zones.

Each zone has an energy value — positive zones restore energy, negative zones drain it. A diver starts each journey with **0 energy** and travels through a contiguous range of zones in order. At any point during the journey, if the diver's energy drops **strictly below 0**, they perish. Energy of exactly **0 is safe**.

You are given an array `zones` and a list of queries. Each query `queries[i] = [l, r]` represents a journey through zones `l` to `r` (0-indexed, inclusive). For each query, the diver starts fresh with **0 energy**. Determine whether the diver survives each journey.

## Function Signature

```cpp
vector<string> survivedJourney(vector<int>& zones, vector<vector<int>>& queries);
```

Return a list of strings — `"YES"` if the diver survives the journey, `"NO"` if they perish.

---

### Example 1

**Input:**
```
zones = [3, 2, -4, -1, 2], queries = [[0,2],[1,4],[0,4]]
```

**Output:**
```
["YES","NO","YES"]
```

**Explanation:**
- `queries[0] = [0,2]`: energy → 3, 5, 1. Never drops below 0 → **YES**
- `queries[1] = [1,4]`: energy → 2, -2. Drops below 0 → **NO**
- `queries[2] = [0,4]`: energy → 3, 5, 1, 0, 2. Never drops below 0 → **YES**

---

### Example 2

**Input:**
```
zones = [5, -2, -2, 3], queries = [[0,3],[1,3],[0,1]]
```

**Output:**
```
["YES","NO","YES"]
```

**Explanation:**
- `queries[0] = [0,3]`: energy → 5, 3, 1, 4. Never drops below 0 → **YES**
- `queries[1] = [1,3]`: energy → -2 immediately. Drops below 0 → **NO**
- `queries[2] = [0,1]`: energy → 5, 3. Never drops below 0 → **YES**

---

### Example 3

**Input:**
```
zones = [1, -1, 1, -1, 1], queries = [[0,4],[1,4],[0,3]]
```

**Output:**
```
["YES","NO","YES"]
```

**Explanation:**
- `queries[0] = [0,4]`: energy → 1, 0, 1, 0, 1. Touches 0 but never drops below → **YES**
- `queries[1] = [1,4]`: energy → -1 immediately. Drops below 0 → **NO**
- `queries[2] = [0,3]`: energy → 1, 0, 1, 0. Touches 0 but never drops below → **YES**

---

### Constraints

- `1 <= zones.length <= 10^5`
- `-10^4 <= zones[i] <= 10^4`
- `1 <= queries.length <= 10^5`
- `0 <= queries[i][0] <= queries[i][1] <= zones.length - 1`

---

_Question designed by [sudhiksha-79](https://github.com/sudhiksha-79)_