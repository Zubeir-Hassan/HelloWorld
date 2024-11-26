#include <iostream>
using namespace std;

int main() {
    int nums[5]; // Array declaration

    // Input loop
    cout << "Please enter 5 integers: ";
    for (int i = 1; i < 5; i++) {
        cin >> nums[i];
    }

    // Output loop
    cout << "The 5 integers entered are:" << endl;
    for (int i:nums) {
        cout << nums[i] << endl;
    }

    return 0;
}