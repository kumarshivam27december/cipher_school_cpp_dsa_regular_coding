/*

Time complexity is a critical concept in computer science
 and is often used to analyze the efficiency of algorithms. 
 It describes how the running time of an algorithm grows with the size of the input.
  In C++, when working with data structures and algorithms (DSA), 
  it's important to understand the time complexity of various operations.

Here are the average time complexities for common data structures and their operations in C++:

Arrays:

Access: O(1)
Search: O(n)
Insertion (at the end): O(1)
Insertion (at a specific index): O(n)
Deletion (at the end): O(1)
Deletion (at a specific index): O(n)
Linked Lists:

Access: O(n)
Search: O(n)
Insertion (at the beginning): O(1)
Insertion (at a specific position): O(n)
Deletion (at the beginning): O(1)
Deletion (at a specific position): O(n)
Stacks and Queues (using linked lists or arrays):

Push (insertion): O(1)
Pop (deletion): O(1)
Top/Peek (access): O(1)
Hash Tables (unordered_map in C++):

Average Case:
Insertion: O(1)
Deletion: O(1)
Access: O(1)
Worst Case (due to collisions):
Insertion: O(n)
Deletion: O(n)
Access: O(n)
Binary Search Trees (BST):

Average Case (balanced BST):
Insertion: O(log n)
Deletion: O(log n)
Access: O(log n)
Worst Case (skewed BST):
Insertion: O(n)
Deletion: O(n)
Access: O(n)
Heaps (priority_queue in C++):

Insertion: O(log n)
Deletion (extracting the maximum or minimum): O(log n)
Access (finding the maximum or minimum): O(1)
Sorting Algorithms:

Quicksort: O(n log n) average case
Mergesort: O(n log n) average case
Heapsort: O(n log n)
Insertion Sort: O(n^2) average case
Selection Sort: O(n^2)
Bubble Sort: O(n^2)



It's important to note that these time
 complexities are averages or worst-case scenarios
  and can vary depending on implementation details,
   data distribution, and other factors. When designing 
   algorithms or selecting data structures, understanding 
   their time complexities can help you make informed decisions about the efficiency of your code.

*/