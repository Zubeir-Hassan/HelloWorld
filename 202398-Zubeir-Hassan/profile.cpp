#include <iostream>
using namespace std;

int main(){
//Declare a string variable 
string myName,Favoritemeal, favoritemovie;   

//Prompt user for their first name
cout << "Please enter your first name: ";
getline(cin,myName);
//Prompt user for their last name
cout << "Please enter your last name: ";
getline(cin,myName);
//Prompt user for their full name
cout << "Please enter your full name: ";
getline(cin,myName);
//Prompt user for their favorite food
cout<<"Please enter your favorite food:";
getline(cin,Favoritemeal);
//prompt user for their favorite movie
cout<<"Please enter your favorite movie:";
getline(cin,favoritemovie);
cout << "Your first name is " << myName << endl;
cout << " Your last name is:"<<myName << endl;
cout << "Your full name is:"<<myName << endl; 
cout << "Your favorite food is:"<<Favoritemeal << endl;
cout << "Your favorite movie is:"<<favoritemovie<< endl;
}