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

## 23 October, 2026
Reverse a linked List | linked list |
Intuition - Think about changing the links. If somehow you have reversed some part of the list and now are in the middle of it, how are you going to change the link so that the current node is reversed? At the same time making sure that no list is lost.
---

---

## 22 October, 2026
Minimum Operations to reduce to zero(1658) | Two Pointers, Prefix Sum, Maximum Subarray, Sliding Window |
IDEA TO LEARN – Instead of removing elements from both ends to reduce `x` to zero, find the longest subarray whose sum equals `total - x`. Use a sliding window with two pointers, expanding the window by moving `right` and shrinking it with `left` while the sum exceeds the target. Track the maximum valid window length and return `n - maxi` (minimum operations). If no valid subarray exists, return `-1`.

Intuition - Why not solve the complement of the actual problem!!
RECHECK - Solve again a few times and revise this concept!



---

---

## 22 October, 2026
Intersection of two linked list | Linked List, Two pointers |.
My approach was to visit every element and store its node in a vector, and for every element check whether it is already present in the vector, if yes than that is the intersection node.if no, and all the elements are traversed, then no intersection. it took O(m+n) time and O(n) space where n is the length of the larger list.
BETTER APPROACH IN CONSTANT SPACE = Use two pointers to find the intersection of two linked lists in \(O(n+m)\) time and \(O(1)\) space. When a pointer reaches nullptr, switch it to the head of the other list. This balances the distance travelled by both pointers, making them meet at the intersection node or at nullptr if no intersection exists. Remember: Switch heads instead of moving to next in the same iteration.Both the pointers travel the same distance in this case(m+n).

INTUITION - When two linked list have different lengths, think about "balancing the distance travelled".


---

---

## 22 October, 2026
Sliding Window Maximum | Sliding Window, Monotonic queue |.
Idea to Learn - You should think of a monotonic stack/queue when you want the greatest/smallest values in constant time complexity. The approach to solve this question uses a deque and maintains the maximum element at the front while pushing the elements from the back. Before inserting an element, remove all smaller elements from the back, as they can never be the maximum while the current element is in the window. Also, remove elements from the front that are no longer part of the current window. The front of the deque always gives the maximum in O(1) time.
---

---


## 22 October, 2026
Min Stack | Stack, Design |.
Was a simple question, I should have given it more time, and also i was not confident on the design part syntax as i have not practices OOPS in C++.
Idea to learn - One thing we can do is store the current minimum along with the value by using a stack which stores a pair(value, minimum so far).

A BETTER APPROACH – Maintain a min variable to track the minimum value so far. When pushing a new minimum, store a modified value (2 * x - min) that is smaller than the new minimum. This helps identify modified values using a simple comparison, allowing us to restore the previous minimum mathematically when the modified value is popped (previous minimum = 2 * current_min - modified_value).

---

---

## 19th October, 2026
Linked List Cycle II | Linked List, Two Pointers |
IDEA TO LEARN-> It uses a mathematical proof to show that after the first meeting of slow and fast, if slow is moved to the start of the list, and then both are moved 1 step in each iteration, they'll meet again at the starting node of the cycle.
WHY - Check GfG lecture or notes (lecture 42).

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

