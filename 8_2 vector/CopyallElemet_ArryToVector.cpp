// copy all element of arry into an vector
#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Example array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize the vector using the range constructor
    vector<int> vec(arr, arr + n);

    // Printing the vector to verify
    for (const auto& elem : vec) {
        cout << elem << " ";
    }

    return 0;




    // m2

    // Example array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create a vector and use the assign method to copy elements from the array
    vector<int> vec;
    vec.assign(arr, arr + n);

    // Printing the vector to verify
    for (const auto& elem : vec) {
        cout << elem << " ";
    }



}
