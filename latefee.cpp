#include <iostream>
#include <string>

using namespace std;

int main() 
{
// Function to calculate late fee
double calculateLateFee(int daysLate, const string bookType) 
{
    double fine = 0.0;

    if (bookType == "regular") {
        if (daysLate <= 0) {
            fine = 0.0; // No fine if returned on time or early
        } else if (daysLate <= 5) {
            fine = daysLate * 0.50; // $0.50 per day for the first 5 days
        } else {
            fine = (5 * 0.50) + ((daysLate - 5) * 1.00); // $1.00 per day after 5 days
        }
    } else if (bookType == "children") {
        if (daysLate <= 0) {
            fine = 0.0; // No fine if returned on time or early
        } else if (daysLate <= 3) {
            fine = daysLate * 0.25; // $0.25 per day for the first 3 days
        } else {
            fine = (3 * 0.25) + ((daysLate - 3) * 0.75); // $0.75 per day after 3 days
        }
    } else if (bookType == "reference") {
        if (daysLate > 0) {
            fine = daysLate * 2.00; // $2.00 per day for reference books
        }
    } else {
        cout << "Invalid book type entered." << endl;
        cout<<fine<<endl;
    }

    int daysLate;
    string bookType;

    cout << "Enter the number of days late: ";
    cin >> daysLate;
    
    cout << "Enter the type of book (regular, children, reference): ";
    cin >> bookType;

    // Convert book type to lowercase for case-insensitive comparison
    for (auto &c : bookType) c = tolower(c);

    double lateFee = calculateLateFee(daysLate, bookType);

    if (lateFee >= 0) { // Only display fee if valid input was given
        cout << "The late fee is: $" << lateFee << endl;
    }

`return 0;}
}