# Order of Chaos — Prometheus

Private reference repository for the three DSA questions designed for IECSE Prometheus "Order of Chaos" event.

---

## Repository Structure

```
OrderOfChaosPrometheus/
├── 01. TheSunkenOracle/
│   ├── input/
│   ├── output/
│   ├── TheSunkenOracle.cpp
│   ├── TheSunkenOracleTest.cpp
│   └── TheSunkenOracle.md
├── 02. TheArchivistsEye/
│   ├── input/
│   ├── output/
│   ├── TheArchivistsEye.cpp
│   ├── TheArchivistsEyeTest.cpp
│   └── TheArchivistsEye.md
├── 03. EmbersOfTheIronMeridian/
│   ├── input/
│   ├── output/
│   ├── EmbersOfTheIronMeridian.cpp
│   ├── EmbersOfTheIronMeridianTest.cpp
│   └── EmbersOfTheIronMeridian.md
└── README.md
```

---

## Questions

### 01. The Sunken Oracle
- **Difficulty:** Easy
- **Topic:** Arrays / Prefix Sum
- **Theme:** Underwater
- **Summary:** Given an array of energy values across n zones, answer q queries. Each query asks whether a diver traversing zones l to r survives (running energy never drops below 0).
- **Key Constraint:** 1 <= n, q <= 10^5
- **Expected Solution:** Build prefix sum array, build sparse table for range minimum query on prefix array. Answer each query in O(1). O(n log n) build, O(1) per query.

---

### 02. The Archivist's Eye
- **Difficulty:** Medium
- **Topic:** Interval Scheduling / Greedy
- **Theme:** Eldritch Horror
- **Summary:** Given n rituals each with a time interval [start, end), find the minimum number of séance chambers needed so no two overlapping rituals share a chamber.
- **Key Constraint:** 1 <= n <= 10^5. Times up to 10^9.
- **Expected Solution:** Sort by start time, use a min-heap of end times. Reuse a chamber if its earliest end <= current start, else open a new one. O(n log n).

---

### 03. Embers of the Iron Meridian
- **Difficulty:** Hard
- **Topic:** Graphs / Prim's MST
- **Theme:** Dying Starship
- **Summary:** Power station starts with only room 1 active. Corridors can only be repaired if one end is already powered. Find the minimum total repair cost to power all rooms, or output -1 if some rooms are unreachable.
- **Key Constraint:** n up to 10^5, m up to 2 x 10^5, sum of n across all test cases <= 2 x 10^5.
- **Expected Solution:** Prim's algorithm with a min-heap, starting from node 1. O((n + m) log n). Output -1 if not all nodes are reachable from node 1.

---

## Compilation and Testing

### Compile solution
```
g++ -O2 -o <SolutionName> <SolutionName>.cpp
```

### Generate test files
```
g++ -O2 -o <GeneratorName> <GeneratorName>.cpp
<GeneratorName>.exe <seed>
```

### Verify solution against expected output
```
<SolutionName>.exe < input\input00.txt > my_out00.txt
fc my_out00.txt output\output00.txt
```

---

## Test File Naming

| File | Description |
|---|---|
| input00.txt / output00.txt | Edge cases and hardcoded traps |
| input01.txt / output01.txt | Medium random cases |
| input02.txt / output02.txt | Large stress cases |

---

## Notes

- All test generators are written without testlib to ensure compatibility on Windows.
- Generators use `mt19937` seeded via `chrono` for reproducibility when a seed is passed.
- The Archivist's Eye generator cross-validates using both a heap solver and a sweep-line solver.
- The Embers generator includes pathological cases: equal-weight edges, almost-disconnected graphs with expensive bridges, and long chains with costly cross edges.
