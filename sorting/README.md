# Sorting Algorithms

Sorting is the process of arranging data in a particular format — ascending or descending order. Sorting is essential for improving search efficiency and simplifying data analysis.


## Time and Space Complexity

| Algorithm   | Time Complexity (Best) | Time Complexity (Average) | Time Complexity (Worst) | Space Complexity |
|-------------|------------------------|---------------------------|--------------------------|------------------|
| Merge Sort  | O(n log n)             | O(n log n)                | O(n log n)               | O(n)             |

---

## Merge Sort

Merge Sort is a divide-and-conquer algorithm that splits the array into halves, sorts them recursively, and then merges them back together. It guarantees **O(n log n)** performance even in the worst case.

### When to use:
- When dealing with large datasets that require guaranteed performance
- When sorting linked lists or external data (merge sort works well with streams/files)

### When to avoid:
- On small arrays (simpler sorts like Insertion Sort are faster in practice)
- When memory is limited (it uses O(n) extra space)

### Real-life examples:
- Merge phase of the **Timsort** algorithm (used in Java, Python)
- External sorting (huge datasets that don’t fit in memory)

