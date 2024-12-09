#include <iostream>
using namespace std;

int main() {
    // Initialize account details
    double accountBalance = 1000.0; 
    double dailyLimit = 500.0;    
    double dailyWithdrawn = 0.0;    

    // Input withdrawal amount
    double withdrawalAmount;
    cout << "Welcome to the ATM!" << endl;
    cout << "Enter the amount you wish to withdraw: $";
    cin >> withdrawalAmount;

    // Check if withdrawal amount is valid
    if (withdrawalAmount <= 0) {
        cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
    } else if (withdrawalAmount > accountBalance) {
        // Insufficient funds
        cout << "Insufficient funds. Your current balance is: $" << accountBalance << endl;
    } else if (withdrawalAmount > (dailyLimit - dailyWithdrawn)) {
        // Exceeds daily limit
        cout << "Transaction declined. Daily withdrawal limit is $" << dailyLimit 
             << ". You have $" << (dailyLimit - dailyWithdrawn) << " remaining for today." << endl;
    } else {
        // Process the withdrawal
        accountBalance -= withdrawalAmount;
        dailyWithdrawn += withdrawalAmount;
        cout << "Transaction successful!" << endl;
        cout << "You withdrew: $" << withdrawalAmount << endl;
        cout << "Remaining balance: $" << accountBalance << endl;
        cout << "Remaining daily limit: $" << (dailyLimit - dailyWithdrawn) << endl;
    }

    return 0;
}
