# Mistake Notebook

Log by category and generalizable lesson, never by problem alone.
See `DSA-Pattern/05-execution.md` §5 for the full rationale.

## The eight categories
1. Concept — didn't know/misunderstood the underlying idea
2. Pattern recognition — knew the pattern but didn't see it here
3. Implementation — right idea, buggy code
4. Complexity — wrong estimate, or didn't check constraints first
5. Edge case — empty input, single element, all-equal, negatives, overflow, duplicates
6. Misread problem — solved a different problem than asked
7. Overcomplicated — solution far more complex than needed
8. Failed optimization — had brute force, couldn't find the improvement

Re-read monthly. Every 4 weeks, count entries per category and drill the largest one.

---

<!-- Copy this block per entry -->

## DATE
PROBLEM
CATEGORY
WHAT
WHY
RULE
RECHECK

---

---

<!-- Copy this block per entry -->

<!-- Copy this block per entry -->
<!-- Copy this block per entry -->

## 18th October, 2026
Binary Tree Inorder Traversal |
IDENTIFYING THE USE OF HELPER FUNCTION | if your solution needs to maintain some information across recursive calls, you may need a helper function.
| How can you identify when to use a helper function?
Look for these hints:

Hint 1: Recursion needs extra parameters
If the required function has limited parameters, but your recursive logic needs additional information such as a vector, counter, or current path, a helper function is often useful.
Example: Inorder traversal, path-sum problems.




Hint 2: The problem requires a recursive return value
Sometimes each recursive call returns information that must be combined, such as the height of a subtree or whether a subtree is balanced. You may use a helper to return that information while the required function returns a different result.




Hint 3: You need to separate setup from repeated work
If you need to initialize a data structure once and then perform recursive or repeated operations, separating these responsibilities into two functions can make the code simpler.

---

---
## 17th October, 2026

When working with subarray sums, its very convenient to use prefix sum(Prefix Sum usage)! Got this idea from a CF problem.


---

---

<!-- Copy this block per entry -->

## 16th October, 2026
Merge Two Sorted List | Linked List | IDEA TO LEARN - When we are not sure about which list we should start from, why not create a dummy node and use it to simplify the operation and later return its next node as head!(Dummy Node Concept)

---

---

<!-- Copy this block per entry -->

<!-- Copy this block per entry -->


## 16th October, 2026
Two Sum | Math
IDEA TO LEARN - If we need to traverse the array or any data structure and we have a need of calculating some value at each index and later using it to compare to later values of the array, why not store the calculated value in a hash map with its index as a key and use it whenever required(HASHING concept used).


---

---

