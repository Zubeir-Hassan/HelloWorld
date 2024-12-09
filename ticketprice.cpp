#include <iostream>
#include <string>
using namespace std;

double calculateTicketPrice(int age, string movieType) {
    double regularPrice = 10.0;
    double threeDPrice = 15.0;
    double ticketPrice;

    // Check for valid movie type
    if (movieType != "regular" && movieType != "3D" && movieType != "3d") {
        cout << "Invalid movie type. Please choose 'regular' or '3D'." << endl;
        return -1; // Return -1 to indicate an error
    }

    // Determine price based on age
    if (age < 5) {
        ticketPrice = 0.0; // Free for children under 5
    } else if (age <= 12) {
        ticketPrice = 5.0; // Discount for children aged 5-12
    } else if (age >= 60) {
        ticketPrice = 8.0; // Discount for seniors
    } else {
        ticketPrice = (movieType == "regular") ? regularPrice : threeDPrice;
    }

    // Add surcharge for 3D movies
    if (movieType == "3D" || movieType == "3d") {
        ticketPrice += 3.0;
    }

    return ticketPrice;
}

int main() {
    int age;
    string movieType;

    // Input age and movie type
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the type of movie (regular/3D): ";
    cin >> movieType;

    // Calculate ticket price
    double ticketPrice = calculateTicketPrice(age, movieType);

    // Output the result
    if (ticketPrice == -1) {
        // Invalid movie type
        return 1;
    } else {
        cout << "The ticket price is: $" << ticketPrice << endl;
    }

    return 0;
}
