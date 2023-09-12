#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 2, 2, 4, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Array to keep track of visited elements
    bool visited[size];

    // Initialize visited array as false
    for (int i = 0; i < size; i++) {
        visited[i] = false;
    }

    // Loop through each element in the array
    for (int i = 0; i < size; i++) {
        // If element is already visited, skip it
        if (visited[i]) {
            continue;
        }

        int frequency = 1; // Initialize frequency of current element

        // Compare current element with the remaining elements
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true; // Mark the element as visited
                frequency++; // Increment frequency
            }
        }

        // Print the frequency of the current element
        std::cout << arr[i] << ": " << frequency << std::endl;
    }

    return 0;
}
