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
Linked List Cycle | Linked List |.

Solved it by altering the values of the list(using INT_MIN as node value to mark it visited). But a better approach should not alter the list contents, and thats when I came across Floyds Cycle Detection Algorithm.

1-> Use two pointers(slow and fast) both initialised to head.
2-> Move slow one step and fast two steps. If a cycle exists, these pointers are bound to meet, and thats how we know a cycle exists.

---

---

## 19th October, 2026
Valid Palindrome | String, Two Pointer |.


Felt the need to know more functions on string, so here they are:-.


1. Common string functions
Function	What it does	Example
s.size() / s.length()	Returns length	s.size() → 11
s.empty()	Checks if string is empty	s.empty() → false
s[i]	Accesses character at index i	s[0] → 'H'
s.front()	Returns first character	'H'
s.back()	Returns last character	'd'
s.push_back(ch)	Adds a character at the end	s.push_back('!')
s.pop_back()	Removes last character	Removes 'd'
s.substr(pos, len)	Extracts a substring	s.substr(0, 5) → "Hello"
s.find(str)	Finds first occurrence	s.find("World") → 6
s.erase(pos, len)	Removes characters	s.erase(5, 1)
s.insert(pos, str)	Inserts a string	s.insert(5, "!")
s.append(str)	Adds a string at the end	s.append("!")
s.clear()	Removes all characters	s.clear().



2. Character functions — <cctype>
These are especially useful for string-based LeetCode problems.
Function	Purpose	Example
isalpha(ch)	Checks alphabet	isalpha('A') → true
isdigit(ch)	Checks digit	isdigit('5') → true
isalnum(ch)	Checks alphabet or digit	isalnum('7') → true
islower(ch)	Checks lowercase	islower('a') → true
isupper(ch)	Checks uppercase	isupper('A') → true
tolower(ch)	Converts to lowercase	tolower('A') → 'a'
toupper(ch)	Converts to uppercase	toupper('a') → 'A'
isspace(ch)	Checks whitespace	isspace(' ') → true.



Three things to remember for DSA
- s.find("abc") returns string::npos if the substring is not found.
- s.substr(pos, len) takes a starting index and a length, not an ending index.
- reverse() and sort() require #include <algorithm>.



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

