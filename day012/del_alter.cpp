#include <iostream>
using namespace std;

void deletion(int size, int* arr, int pos) {
  // Check if the position is valid
  if (pos < 1 || pos > size) {
    cout << "Invalid position!" << endl;
    return;
  }

  // Shift the elements after the deleted element one position to the left
  for (int i = pos-1; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }

  // Decrement the size of the array
  arr[size - 1] = 0;
  size--;
}

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

  // Call the deletion function
  deletion(n, arr, pos);

  // Print the array after deletion
  cout << "Linked List after deletion: ";
  for (int i = 0; i < n-1; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
