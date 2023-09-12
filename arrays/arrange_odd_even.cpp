#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0) {
        return a > b; // Sort even elements in descending order
    } else if (a % 2 != 0 && b % 2 != 0) {
        return a < b; // Sort odd elements in ascending order
    } else {
        return a % 2 == 0; // Put even elements before odd elements
    }
}

int main() {
    int n;
    // cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    // cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n, compare);
    
    // cout << "Output: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
