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

## 16th October, 2026
Merge Two Sorted List | Linked List | IDEA TO LEARN - When we are not sure about which list we should start from, why not create a dummy node and use it to simplify the operation later return its next node as head!(Dummy Node Concept)

---

---

<!-- Copy this block per entry -->

<!-- Copy this block per entry -->


## 16th October, 2026
Two Sum | Math
IDEA TO LEARN - If we need to traverse the array or any data structure and we have a need of calculating some value at each index and later using it to compare to later values of the array, why not store the calculated value in a hash map with its index as a key and use it whenever required(HASHING concept used).


---

---

<!-- Copy this block per entry -->
## August 26th, 2026
Pallindrome Number|
Math|
Integer overflow|
I was multiplying the number by 10 but didn't took into consideration, doing that could lead to overflow for int data type for a number like 1234567899|
Digit manipulation without converting to string, Always check for overflow kinda situation, think through such cases|
RECHECK - there ought to be a better solution, where they only reverse until the half of the numbers(didn't explored much)

---
<!-- Copy this block per entry -->

## August 26th, 2026
Roman to Integer|
Math, Implementation|
Was not able to think clearly on how to do it|
I was trying to put all the variety of IV, IX in map and then was stuck around how to iterate on the string from right to left in a pair of 2, I was stuck there.|
Rule-based scanning; look-ahead, A prev and current approach didn't came into my mind that time, and figure out the IV then if before a large number a small number comes, we subtract the value from large number to small number, we keep a track of right number and current number.
RECHECK

---
---

<!-- Copy this block per entry -->

## August 26th, 2026
Longest common prefix|
String|
I was not able to think how I should approach this problem, got confused on how to iterate through the strings and check it, was thinking into a rabit hole with a 3loop way which felt wrong so I stopped.|
WHY|
Vertical vs horizontal scanning|
RECHECK

---

---

<!-- Copy this block per entry -->

## August 26th, 2026
Valid Parethesis
Stack
WHAT
I did knew I had to use stack but then I was not able to clearly write the code, I will have to first think on my approach before writing code, cause this is biting me and I'm making mistakes.
RULE
RECHECK

---


---

<!-- Copy this block per entry -->

## August 26th, 2026
21 Merge Two Sorted Lists
Linked List/Implementation|
WHAT
Was not able to think how we would do it in place, 
RULE
RECHECK

---