# Embers of the Iron Meridian
**Difficulty: Hard**

## Problem

The space station **Iron Meridian** has gone dark. A catastrophic failure knocked out power to every module except **module 1 (the Central Core)**. Engineer Sable has one shot to restore the grid.

Each corridor connecting two modules has a repair cost. The station's failsafes are strict — a corridor can only be repaired if **one of its endpoints is already powered**. Once repaired, the other module powers on.

You are given `n` modules and a list of corridors where `corridors[i] = [u, v, w]` represents a corridor between modules `u` and `v` with repair cost `w`. Find the **minimum total cost** to power all modules. If some modules are unreachable from module 1, return `-1`.

## Function Signature

```cpp
long long minRepairCost(int n, vector<vector<int>>& corridors);
```

Return the minimum total repair cost, or `-1` if it is impossible to power all modules.

---

### Example 1

**Input:**
```
n = 4, corridors = [[1,2,3],[1,3,1],[2,3,1],[2,4,4],[3,4,2]]
```

**Output:**
```
4
```

**Explanation:**
- Repair `1→3` (cost 1) — module 3 powered
- Repair `3→2` (cost 1) — module 2 powered
- Repair `3→4` (cost 2) — module 4 powered
- Total = 1 + 1 + 2 = **4**

---

### Example 2

**Input:**
```
n = 3, corridors = [[1,2,5],[1,3,10]]
```

**Output:**
```
15
```

**Explanation:**
- Both corridors connect directly from module 1 — both must be repaired.
- Repair `1→2` (cost 5), repair `1→3` (cost 10)
- Total = 5 + 10 = **15**

---

### Example 3

**Input:**
```
n = 4, corridors = [[2,3,5],[3,4,7]]
```

**Output:**
```
-1
```

**Explanation:**
- Module 1 has no corridors. Modules 2, 3, and 4 are completely unreachable.
- It is impossible to power all modules → **-1**

---

### Constraints

- `1 <= n <= 10^5`
- `0 <= corridors.length <= 2 * 10^5`
- `corridors[i] = [u, v, w]`
- `1 <= u, v <= n`
- `1 <= w <= 10^9`

---

_Question designed by [sudhiksha-79](https://github.com/sudhiksha-79)_