// copy all element of a 2D vector into another 2D vector
#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Example 2D vector
    vector<vector<int>> vec2D = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Initialize the new 2D vector with the elements of the existing 2D vector
    vector<vector<int>> newVec2D(vec2D.begin(), vec2D.end());

    // Printing the new 2D vector to verify
    for (const auto& row : newVec2D) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;



    // method 2

    
      // Example 2D vector
    vector<vector<int>> vec2D = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Initialize the new 2D vector with the elements of the existing 2D vector
    vector<vector<int>> newVec2D=vec2D;

    // Printing the new 2D vector to verify
    for (const auto& row : newVec2D) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;


}
