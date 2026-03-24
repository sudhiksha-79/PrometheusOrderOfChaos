# The Archivist's Eye
**Difficulty: Easy**

## Problem

**Yx'athar**, the Outer God, peers across all timelines simultaneously. Cultists hold their rituals in **séance chambers** — each chamber hosts only one ritual at a time.

Each ritual occupies a chamber for a continuous time interval `[start, end)`. Two rituals **conflict** if their intervals overlap — one begins strictly before the other ends. A ritual ending at time `x` and another starting at time `x` do **not** conflict — the chamber is free the moment the first ritual ends.

You are given a list of rituals where `rituals[i] = [start, end]` represents a ritual occupying a chamber during `[start, end)`. Find the **minimum number of séance chambers** needed to hold all rituals without conflict.

## Function Signature

```cpp
int minChambers(vector<vector<int>>& rituals);
```

Return the minimum number of chambers required.

---

### Example 1

**Input:**
```
rituals = [[0,30],[5,10],[15,20],[25,35]]
```

**Output:**
```
2
```

**Explanation:**
- At time 5, `[0,30)` and `[5,10)` are both active → 2 chambers needed
- `[15,20)` reuses the chamber freed by `[5,10)` at time 10
- `[25,35)` reuses the chamber freed by `[15,20)` at time 20
- Maximum simultaneous rituals at any point = **2**

---

### Example 2

**Input:**
```
rituals = [[0,10],[10,20],[20,30]]
```

**Output:**
```
1
```

**Explanation:**
- `[0,10)` ends at 10. `[10,20)` starts at 10 — no conflict, same chamber.
- `[10,20)` ends at 20. `[20,30)` starts at 20 — no conflict, same chamber.
- All three fit in **1** chamber sequentially.

---

### Example 3

**Input:**
```
rituals = [[1,5],[2,4],[3,6],[7,10]]
```

**Output:**
```
3
```

**Explanation:**
- At time 3, all of `[1,5)`, `[2,4)`, and `[3,6)` are active → 3 chambers needed
- `[7,10)` starts after all end → reuses a freed chamber
- Maximum simultaneous rituals = **3**

---

### Constraints

- `1 <= rituals.length <= 10^5`
- `0 <= rituals[i][0] < rituals[i][1] <= 10^9`

---

_Question designed by [sudhiksha-79](https://github.com/sudhiksha-79)_