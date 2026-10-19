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

## 19th October, 2026
Linked List Cycle II | Linked List |
IDEA TO LEARN-> It uses a mathematical proof to show that after the first meeting of slow and fast, if slow is moved to the start of the list, and then both are moved 1 step in each iteration, they'll meet again at the starting node of the cycle.
WHY - 

## Why Do Slow and Fast Meet at the Cycle's Start?

When slow and fast meet inside the cycle, **fast has travelled twice the distance of slow**. Let `L` be the distance from the head to the cycle's start, `x` be the distance from the cycle's start to the meeting point, and `C` be the cycle's length.

### Distance Equation

Let slow travel distance `d`. Then fast travels `2d`.

Since fast has completed some extra full cycles, we can write:

`2d - d = kC`

`d = kC`

Slow's distance is also `d = L + x`, so:

`L + x = kC`

Therefore:

`L = kC - x = (k - 1)C + (C - x)`

This means **the distance from the head to the cycle's start (`L`) equals the distance from the meeting point to the cycle's start (`C - x`), plus some complete cycles**.

### Conclusion

Move slow back to the head and keep fast at the meeting point. Now move both one step at a time. Since their distances to the cycle's start are equal modulo the cycle length, they meet exactly at the **start of the cycle**.


---

---

## 19th October, 2026
Linked List Cycle | Linked List |.

Solved it by altering the values of the list(using INT_MIN as node value to mark it visited). But a better approach should not alter the list contents, and thats when I came across Floyds Cycle Detection Algorithm.

1-> Use two pointers(slow and fast) both initialised to head.
2-> Move slow one step and fast two steps. If a cycle exists, these pointers are bound to meet, and thats how we know a cycle exists.

Why it works? : Fast enters the loop first, and after each iteration the distance between them increases by 1. There comes a time when the distance between them becomes equal to the length of the cycle, and thats when they meet.For example if slow is at the start of the cycle and fast is at a distance equal to the length of the cycle, then it simply means fast has completed one cycle and is also at the start of the loop, where slow is!.



---

---

## 19th October, 2026
Valid Palindrome | String, Two Pointer |.


Felt the need to know more functions on string, so here they are:-.


# C++ String Functions — DSA Quick Reference

## 1. Basic String Operations

| Function | Purpose | Example |
|---|---|---|
| `s.size()` / `s.length()` | Returns string length | `s.size()` → `11` |
| `s.empty()` | Checks if string is empty | `s.empty()` → `false` |
| `s[i]` | Accesses character at index `i` | `s[0]` → `'H'` |
| `s.front()` | Returns first character | `s.front()` → `'H'` |
| `s.back()` | Returns last character | `s.back()` → `'d'` |
| `s.push_back(ch)` | Adds a character at the end | `s.push_back('!')` |
| `s.pop_back()` | Removes the last character | `s.pop_back()` |
| `s.clear()` | Removes all characters | `s.clear()` |

## 2. Substring and Editing Functions

| Function | Purpose | Example |
|---|---|---|
| `s.substr(pos, len)` | Extracts `len` characters from `pos` | `s.substr(0, 5)` → `"Hello"` |
| `s.find(str)` | Finds first occurrence | `s.find("World")` → `6` |
| `s.erase(pos, len)` | Removes characters | `s.erase(5, 1)` |
| `s.insert(pos, str)` | Inserts text at a position | `s.insert(5, "!")` |
| `s.append(str)` | Adds text at the end | `s.append("!")` |
| `s1 == s2` | Checks if two strings are equal | `s1 == s2` |

**Note:** `find()` returns `string::npos` if the substring is not found.

```cpp
if (s.find("abc") == string::npos) {
    cout << "Not found";
}
```

## 3. Character Functions (`<cctype>`)

These functions operate on one character at a time.

| Function | Purpose | Example |
|---|---|---|
| `isalpha(ch)` | Checks if character is a letter | `isalpha('A')` |
| `isdigit(ch)` | Checks if character is a digit | `isdigit('5')` |
| `isalnum(ch)` | Checks if character is a letter or digit | `isalnum('7')` |
| `islower(ch)` | Checks for lowercase | `islower('a')` |
| `isupper(ch)` | Checks for uppercase | `isupper('A')` |
| `isspace(ch)` | Checks for whitespace | `isspace(' ')` |
| `tolower(ch)` | Converts uppercase to lowercase | `tolower('A')` → `'a'` |
| `toupper(ch)` | Converts lowercase to uppercase | `toupper('a')` → `'A'` |

### Convert an entire string to lowercase

```cpp
for (char &ch : s) {
    ch = tolower(static_cast<unsigned char>(ch));
}
```

## 4. Conversion Functions

| Function | Purpose | Example |
|---|---|---|
| `stoi(s)` | Converts string to `int` | `stoi("123")` → `123` |
| `stoll(s)` | Converts string to `long long` | `stoll("12345678900")` |
| `to_string(x)` | Converts number to string | `to_string(123)` → `"123"` |

## 5. Algorithms Used with Strings (`<algorithm>`)

| Function | Purpose | Example |
|---|---|---|
| `reverse(s.begin(), s.end())` | Reverses string in place | `"abc"` → `"cba"` |
| `sort(s.begin(), s.end())` | Sorts characters in ascending order | `"cab"` → `"abc"` |
| `count(s.begin(), s.end(), ch)` | Counts occurrences of a character | `count(s.begin(), s.end(), 'a')` |

## 6. Quick Examples

### Reverse a string

```cpp
string s = "hello";
reverse(s.begin(), s.end());
// s = "olleh"
```

### Sort a string

```cpp
string s = "dcab";
sort(s.begin(), s.end());
// s = "abcd"
```

### Check if a character is alphanumeric

```cpp
char ch = '7';

if (isalnum(static_cast<unsigned char>(ch))) {
    cout << "Alphanumeric";
}
```

### Convert a numeric string to an integer

```cpp
string s = "123";
int x = stoi(s);
```

## 7. Important Notes

- String indices start at `0`.
- `substr(pos, len)` takes a starting position and a length.
- `find()` returns `string::npos` if no match exists.
- `tolower()` and `toupper()` work on one character at a time.
- `isalpha()`, `isdigit()`, and `isalnum()` check one character at a time.
- Use `#include <cctype>` for character functions.
- Use `#include <algorithm>` for `sort()`, `reverse()`, and `count()`.
- `stoi()` can throw an exception if the input is invalid or out of range.



---

---

## 18th October, 2026
Maximum Subarray | Divide and Conquer , Array | Approach - got the right approach of using divide and conquer but forgot to consider the case of crossing subarray(subarrays which have part in both side). Later considered the crossing and got the answer.
IDEA TO LEARN - If you can divide the problem into smaller parts and solve them at a lower level, do it!(DIVIDE AND CONQUER USE).

BETTER APPROACH - Kadane's Algorithm
ANOTHER APPROACH - Prefix sum(Implement this too).
RECHECK - Kadane's Algorithm and Prefix Sum approach

---

---
## 18th October, 2026
Best time to buy and sell stock | Greedy one pass | Solved using the brute force approach but got TLE, couldnt think about a one pass approach and thats when I came across the idea of greedy one pass |

IDEA TO LEARN - Why not focus on two things. 1 -> consider the lowest seen price at every iteration. 2-> Consider what profit would be obtained if sold on the present day(iteration).(greedy one pass - best solution at every step and use only one traversal) 

---

---
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

