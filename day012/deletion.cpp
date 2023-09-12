#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Print the array before deletion
  cout << "Linked List before deletion: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Read the position of the element to be deleted
  int pos;
  cin >> pos;

  // Check if the position is valid
  if (pos < 1 || pos > n) {
    cout << "Invalid position!" << endl;
    return 0;
  }

  // Shift the elements after the deleted element one position to the left
  for (int i = pos-1; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  // Decrement the size of the array
  arr[n - 1] = 0;
  n--;

  // Print the array after deletion
  cout << "Linked List after deletion: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
