#include <iostream>

using namespace std;

// left_rotate function
void left_rotate(int arr[], int size) {
  // Write your code here
  int temp = 0;
  temp = arr[size - 1];
  arr[size - 1] = arr[0];
  for(int i = 0; i < size - 2 ;i++){
    arr[i] = arr[i+1];
  }
 arr[size - 2] = temp;
}//Since arrays are pass by reference i took data type to be void

// Function to print values of an array
void print_array(int arr[], int size) {
  // Traverse array
  for (int i = 0; i < size; i++) {
    // Print value at index i
    cout << arr[i] << " ";
  }
  cout << endl;
}

// main function
int main() {
  // Initialize size of an array
  int size = 5;
  // Initialize array elements
  int arr[size] = {1, 2, 3, 4, 5 };
  
  cout << "Array before left rotation" << endl;
  // Call print_array function
  print_array(arr, size);
  // Call left_rotate function
  left_rotate(arr, size);

  cout << "Array after left rotation: " << endl;
  // Call print_array function
  print_array(arr, size);

  r
