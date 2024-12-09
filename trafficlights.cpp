#include <iostream>
using namespace std;

int main() {
    int timer;

    // Prompt the user to enter a timer value
    cout << "Enter the traffic light timer value (1 for Red, 2 for Yellow, 3 for Green): ";
    cin >> timer;

    // Simulate traffic light behavior using a switch statement
    switch (timer) {
        case 1:
            cout << "Traffic Light: RED - Stop\n";
            break;
        case 2:
            cout << "Traffic Light: YELLOW - Get Ready\n";
            break;
        case 3:
            cout << "Traffic Light: GREEN - Go\n";
            break;
        default:
            cout << "enter 1, 2, or 3.\n";
            break;
    }

    return 0;
}