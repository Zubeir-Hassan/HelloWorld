#include <iostream>
using namespace std;

int main(){
//Declare a string variable 
string myName,description;   

//Prompt user for their full name
cout << "Please enter your full name: ";
getline(cin,myName);
//Prompt user for their description
cout << "Please describe yourself: ";
getline(cin,description);

cout << "Your name is " << myName << endl;
cout << " Please describe yourself:"<< description <<endl;
}