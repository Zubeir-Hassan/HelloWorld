#include <iostream>

using namespace std;

// Function to calculate total cost after applying discount
double calculateTotalCost(double purchaseAmount) {
    double discount = 0.0;

    // Determine discount based on purchase amount
    if (purchaseAmount >= 500) {
        discount = 0.20; // 20% discount for purchases of $500 or more
    } else if (purchaseAmount >= 200) {
        discount = 0.15; // 15% discount for purchases between $200 and $499.99
    } else if (purchaseAmount >= 100) {
        discount = 0.10; // 10% discount for purchases between $100 and $199.99
    } else {
        discount = 0.0; // No discount for purchases below $100
    }

    // Calculate the total cost after applying the discount
    double totalCost = purchaseAmount - (purchaseAmount * discount);
    return totalCost;
}

int main() {
    double purchaseAmount;

    cout << "Enter the total purchase amount: $";
    cin >> purchaseAmount;

    // Validate input
    if (purchaseAmount < 0) {
        cout << "Invalid purchase amount. Please enter a positive value." << endl;
        return 1; // Exit with error code
    }

    double totalCost = calculateTotalCost(purchaseAmount);
    
    // Display the total cost after applying the discount
    cout << "The total cost after applying the discount is: $" << totalCost << endl;

    return 0; // Successful execution
}